package org.qtproject.hellopython;

import android.app.Activity;
import android.os.Bundle;  
import android.view.Window;
import android.view.WindowManager;
import android.content.Intent;
import android.view.SurfaceView;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;

import android.os.Build;
import android.content.pm.PackageManager;
import android.support.v4.content.ContextCompat;
import android.support.v4.app.ActivityCompat;
import android.widget.Toast;

public class PythonLoadActivity extends org.qtproject.qt5.android.bindings.QtActivity
{
    private final static String TAG = "hellopython";

    private static String m_request_url;
    private static PythonLoadActivity m_instance;
    public PythonLoadActivity() {
        m_instance = this;
    }
    public static String getUrl() {
        return m_instance.m_request_url;
    }

    @Override  
    public void onCreate(Bundle savedInstanceState) {                   
        // requestWindowFeature(Window.FEATURE_NO_TITLE);
        // getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        //         WindowManager.LayoutParams.FLAG_FULLSCREEN);

        // init python
        // System.load("/data/data/org.qtproject.hellopython/files/lib/libpython3.5m.so");

        super.onCreate(savedInstanceState);

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (!checkPermission())
                requestPermission();
        }

//        // Init surface
//        SurfaceView surfaceView = new SurfaceView(this);

//        // It displaces original QML view.
//        //setContentView(surfaceView);

//        // Add SurfaceView to view container
//        View view = getWindow().getDecorView().getRootView();
//        LinearLayout mainLinearLayout = (LinearLayout)(((ViewGroup)view).getChildAt(0));
//        FrameLayout mainFrameLayout = (FrameLayout)(mainLinearLayout.getChildAt(1));
//        mainFrameLayout.addView(surfaceView, 0);

        // https://github.com/wang-bin/QtAV/blob/master/examples/QMLPlayer/main.cpp
        Intent intent = getIntent();
        String action = intent.getAction();

        if (intent.ACTION_VIEW.equals(action)) {
            m_request_url = intent.getDataString();
        }
    }

    protected boolean checkPermission() {
        int result = ContextCompat.checkSelfPermission(this, android.Manifest.permission.WRITE_EXTERNAL_STORAGE);
        if (result == PackageManager.PERMISSION_GRANTED)
            return true;
        return false;
    }
    protected void requestPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M)
            requestPermissions(new String[]{android.Manifest.permission.WRITE_EXTERNAL_STORAGE}, 100);
    }
}

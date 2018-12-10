package com.github.barismeral.jni;

public class Mat {

    static{
        System.loadLibrary("lib/Mat");
    }

    public static native int plus(int a,int b);

    public static native int minus(int a,int b);

    public static native double div(int a,int b);

    public static native int multi(int a,int b);


    }




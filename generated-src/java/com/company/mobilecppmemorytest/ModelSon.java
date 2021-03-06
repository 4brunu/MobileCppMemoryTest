// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from son.djinni

package com.company.mobilecppmemorytest;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class ModelSon {
    public abstract void simulateWork(SonCallback sonCallback);

    public static native ModelSon create(NetworkRequest networkRequest, Logger logger);

    private static final class CppProxy extends ModelSon
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public void simulateWork(SonCallback sonCallback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_simulateWork(this.nativeRef, sonCallback);
        }
        private native void native_simulateWork(long _nativeRef, SonCallback sonCallback);
    }
}

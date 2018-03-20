// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from varnames.djinni

package com.dropbox.djinni.test;

import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public abstract class VarnameInterface {
    /**
     * We should also rewrite parameter names in docstrings.
     * RArg should be rewritten.
     * _i_arg_ should not.
     */
    @Nonnull
    public abstract VarnameRecord Rmethod(@Nonnull VarnameRecord RArg);

    @CheckForNull
    public abstract VarnameInterface Imethod(@CheckForNull VarnameInterface IArg);

    private static final class CppProxy extends VarnameInterface
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

        // VarnameInterface methods

        @Override
        public VarnameRecord Rmethod(VarnameRecord RArg)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_Rmethod(this.nativeRef, RArg);
        }
        private native VarnameRecord native_Rmethod(long _nativeRef, VarnameRecord RArg);

        @Override
        public VarnameInterface Imethod(VarnameInterface IArg)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_Imethod(this.nativeRef, IArg);
        }
        private native VarnameInterface native_Imethod(long _nativeRef, VarnameInterface IArg);
    }
}

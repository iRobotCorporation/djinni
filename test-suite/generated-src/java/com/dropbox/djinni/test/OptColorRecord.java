// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

package com.dropbox.djinni.test;

import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public final class OptColorRecord {


    /*package*/ final Color mMyColor;

    public OptColorRecord(
            @CheckForNull Color myColor) {
        this.mMyColor = myColor;
    }

    @CheckForNull
    public Color getMyColor() {
        return mMyColor;
    }

    @Override
    public String toString() {
        return "OptColorRecord{" +
                "mMyColor=" + mMyColor +
        "}";
    }

}
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from interface_inheritance.djinni

#include "NativeSubCppInterfaceInheritance.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeSubCppInterfaceInheritance::NativeSubCppInterfaceInheritance() : ::djinni::JniInterface<::testsuite::SubCppInterfaceInheritance, NativeSubCppInterfaceInheritance>("com/dropbox/djinni/test/SubCppInterfaceInheritance$CppProxy") {}

NativeSubCppInterfaceInheritance::~NativeSubCppInterfaceInheritance() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_SubCppInterfaceInheritance_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::SubCppInterfaceInheritance>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_SubCppInterfaceInheritance_00024CppProxy_native_1baseMethod(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::SubCppInterfaceInheritance>(nativeRef);
        auto r = ref->base_method();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_SubCppInterfaceInheritance_00024CppProxy_native_1overrideMethod(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::SubCppInterfaceInheritance>(nativeRef);
        auto r = ref->override_method();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_SubCppInterfaceInheritance_00024CppProxy_native_1subMethod(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::SubCppInterfaceInheritance>(nativeRef);
        auto r = ref->sub_method();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_SubCppInterfaceInheritance_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::testsuite::SubCppInterfaceInheritance::create();
        return ::djinni::release(::djinni_generated::NativeSubCppInterfaceInheritance::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated

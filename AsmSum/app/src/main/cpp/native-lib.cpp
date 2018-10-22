#include <jni.h>
#include <string>
#include <android/log.h>

extern "C" {
    jint multiply(jint a, jint b);
}

extern "C" JNIEXPORT jstring

JNICALL
Java_com_omelina_assembly_asmsum_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    __android_log_print(ANDROID_LOG_DEBUG,"NATIVE","%d ", multiply(6,7));

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

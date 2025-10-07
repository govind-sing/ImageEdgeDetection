#include <jni.h>
#include <string>
#include <android/log.h>

// Log tag for our native logging
#define LOG_TAG "Native-Lib"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT void JNICALL
Java_com_example_myapplication_MainActivity_processFrame(
        JNIEnv* env,
        jobject /* this */,
        jint width, jint height,
        jbyteArray y_plane, jbyteArray u_plane, jbyteArray v_plane,
        jint y_row_stride, jint uv_pixel_stride, jint uv_row_stride) {
    LOGD("Frame received in C++. Dimensions: %d x %d", width, height);
}
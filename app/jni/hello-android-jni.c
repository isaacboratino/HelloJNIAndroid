#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_isaacandsabrina_hellojniandroid_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

   // TODO  
   return (*env)->NewStringUTF(env, "Hello From Jni");
}
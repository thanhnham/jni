#include <jni.h>
#include <stdio.h>
#include "myjni/include/myjni_HelloJNI.h"
 
JNIEXPORT void JNICALL Java_myjni_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello World package!\n");
   return;
}
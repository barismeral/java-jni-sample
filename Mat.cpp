#include "com_github_barismeral_jni_Mat.h"

JNIEXPORT jint JNICALL Java_com_github_barismeral_jni_Mat_plus
(JNIEnv *env, jclass jc, jint a, jint b)
{
	return a + b;
}

JNIEXPORT jint JNICALL Java_com_github_barismeral_jni_Mat_minus
(JNIEnv *env, jclass jc, jint a, jint b)
{
	return a - b;
}

JNIEXPORT jdouble JNICALL Java_com_github_barismeral_jni_Mat_div
(JNIEnv *env, jclass jc , jint a, jint b) {

	return (jdouble)a /(jdouble)b;

}

JNIEXPORT jint JNICALL Java_com_github_barismeral_jni_Mat_multi
(JNIEnv *env, jclass jc, jint a, jint b)
{
	return a*b;
}


/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nativeFunctions_NativeLib */

#ifndef _Included_nativeFunctions_NativeLib
#define _Included_nativeFunctions_NativeLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     nativeFunctions_NativeLib
 * Method:    getServerIPByDomainNameAndStartClient
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_getServerIPByDomainNameAndStartClient
  (JNIEnv *, jclass, jstring);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    getServerIPandStartClient
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_getServerIPandStartClient
  (JNIEnv *, jclass, jstring);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    connectToServer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_connectToServer
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    sendAndRecvAcceInfoToOther
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_sendAndRecvAcceInfoToOther
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    OSGRun
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_OSGRun
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    initOSG
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_initOSG
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    mouseButtonPressEvent
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_mouseButtonPressEvent
  (JNIEnv *, jclass, jfloat, jfloat, jint);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    mouseButtonReleaseEvent
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_mouseButtonReleaseEvent
  (JNIEnv *, jclass, jfloat, jfloat, jint);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    mouseMoveEvent
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_mouseMoveEvent
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    sendRotation
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_sendRotation
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    sendKeyDown
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_sendKeyDown
  (JNIEnv *, jclass, jint);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    sendMainScene
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_sendMainScene
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    toggleDrawLine
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_toggleDrawLine
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    getNewPt
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_getNewPt
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    toggleEdit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_nativeFunctions_NativeLib_toggleEdit
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    EditR
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_EditR
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    Edit
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_Edit
  (JNIEnv *, jclass, jint, jint, jfloat);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    deleteGeometry
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_deleteGeometry
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    addBox
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_addBox
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    setColor
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_setColor
  (JNIEnv *, jclass, jfloat, jfloat, jfloat);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    changeColor
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_changeColor
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    MarkerDetection
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_MarkerDetection
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    InitialozeOpenCVGlobalVarByLoad
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_InitialozeOpenCVGlobalVarByLoad
  (JNIEnv *, jclass, jstring);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    sendSMarker
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_sendSMarker
  (JNIEnv *, jclass);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    saveSMarker
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_saveSMarker
  (JNIEnv *, jclass, jstring);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    saveScene
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_saveScene
  (JNIEnv *, jclass, jstring);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    loadScene
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_loadScene
  (JNIEnv *, jclass, jstring);

/*
 * Class:     nativeFunctions_NativeLib
 * Method:    fixViewAngle
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nativeFunctions_NativeLib_fixViewAngle
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif

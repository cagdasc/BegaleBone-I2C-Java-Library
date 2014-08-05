/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cacaosd_BBB_I2C */

#ifndef _Included_cacaosd_BBB_I2C
#define _Included_cacaosd_BBB_I2C
#ifdef __cplusplus
extern "C" {
#endif
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>

#define I2C_BUS 1
#define PATH_SIZE 15
    const char *path;
    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    writeBit
     * Signature: (BBBB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_writeBit
    (JNIEnv *, jobject, jbyte, jbyte, jbyte, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    writeBits
     * Signature: (BBBBB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_writeBits
    (JNIEnv *, jobject, jbyte, jbyte, jbyte, jbyte, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    writeByte
     * Signature: (BBB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_writeByte
    (JNIEnv *, jobject, jbyte, jbyte, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    writeByteBuffer
     * Signature: (BB[BB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_writeByteBuffer
    (JNIEnv *, jobject, jbyte, jbyte, jbyteArray, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    writeByteArduino
     * Signature: (BB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_writeByteArduino
    (JNIEnv *, jobject, jbyte, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    writeByteBufferArduino
     * Signature: (B[BB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_writeByteBufferArduino
    (JNIEnv *, jobject, jbyte, jbyteArray, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    initialize
     * Signature: ()V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_initialize
    (JNIEnv *, jobject);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    readByte
     * Signature: (BB)B
     */
    JNIEXPORT jbyte JNICALL Java_cacaosd_BBB_1I2C_readByte
    (JNIEnv *, jobject, jbyte, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    readBit
     * Signature: (BBB)B
     */
    JNIEXPORT jbyte JNICALL Java_cacaosd_BBB_1I2C_readBit
    (JNIEnv *, jobject, jbyte, jbyte, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    readBits
     * Signature: (BBBB)B
     */
    JNIEXPORT jbyte JNICALL Java_cacaosd_BBB_1I2C_readBits
    (JNIEnv *, jobject, jbyte, jbyte, jbyte, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    readByteBuffer
     * Signature: (BB[BB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_readByteBuffer
    (JNIEnv *, jobject, jbyte, jbyte, jbyteArray, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    readByteBufferArduino
     * Signature: (B[BB)V
     */
    JNIEXPORT void JNICALL Java_cacaosd_BBB_1I2C_readByteBufferArduino
    (JNIEnv *, jobject, jbyte, jbyteArray, jbyte);

    /*
     * Class:     cacaosd_BBB_I2C
     * Method:    readWord
     * Signature: (BBB)S
     */
    JNIEXPORT jshort JNICALL Java_cacaosd_BBB_1I2C_readWord
    (JNIEnv *, jobject, jbyte, jbyte, jbyte);

#ifdef __cplusplus
}
#endif
#endif
LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)
LOCAL_MODULE := fftw3
LOCAL_SRC_FILES := libfftw3.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := ndkfft
LOCAL_SRC_FILES := callfftw.c
LOCAL_SHARED_LIBRARIES := libfftw3
include $(BUILD_SHARED_LIBRARY)

#TOP_DIR := $(call my-dir)
#include $(LOCAL_PATH)/fftw3/project/jni/Android.mk
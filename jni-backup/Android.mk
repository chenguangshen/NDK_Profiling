LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := ndkfft
LOCAL_SRC_FILES := callfftw.c
LOCAL_STATIC_LIBRARIES := fftw3
include $(BUILD_SHARED_LIBRARY)
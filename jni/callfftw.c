#include "com_example_ndkfft_MainService.h"
#include "fftw3/project/jni/api/fftw3.h"

jint test(void) {
	int N;
	fftw_complex *in, *out;
	fftw_plan my_plan;
	in = (fftw_complex*) fftw_malloc(sizeof(fftw_complex)*N);
	out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex)*N);
	my_plan = fftw_plan_dft_1d(N, in, out, FFTW_FORWARD, FFTW_ESTIMATE);
	fftw_execute(my_plan);
	fftw_destroy_plan(my_plan);
	fftw_free(in);
	fftw_free(out);
	return 123;
}

JNIEXPORT jint JNICALL Java_com_example_ndkfft_MainService_getResultFromNDK
  (JNIEnv *env, jobject obj, jint x) {
    jint res = test() * 2;
	return res;  
}

#include "com_example_ndkfft_MainService.h"
#include "fftw3/include/fftw3.h"

int test(void) {
	int N;
	fftw_complex *in, *out;
	fftw_plan my_plan;
	in = (fftw_complex*) fftw_malloc(sizeof(fftw_complex)*N);
	out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex)*N);
	my_plan = plan_dft_1d(N, in, out, FFTW_FORWARD, FFTW_ESTIMATE);
	execute(my_plan);
	destroy_plan(my_plan);
	free(in);
	free(out);
	return 0;
}

JNIEXPORT jint JNICALL Java_com_example_ndkfft_MainService_getResultFromNDK
  (JNIEnv *env, jobject obj, jint x) {
	return x * 2;  
}

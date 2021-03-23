#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#define DEBUG	// 디버긋 선언
double calc_array_avg(int* a, int size);	//함수 정의

int main(void)	
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double avg = calc_array_avg(a, 10);	//함수 호출

	printf("배열의 평균 : %.1lf\n", avg);	
	return 0;

}



double calc_array_avg(int* a, int size){
#ifdef DEBUG	//호출 부분 dbg
	printf("start of clac_array_avg()\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
#endif

	double sum = 0;
		
	for (int i = 0; i < size; i++) {
#ifdef DEBUG	// processing
		printf("%d 를 더하는 중 ..\n", i);
#endif
		sum += a[i];
	}

	double avg = sum / size;

#ifdef DEBUG	// 리턴부분 dbg
	printf("end of clac_array_avg()\n");
#endif
	return avg;
}


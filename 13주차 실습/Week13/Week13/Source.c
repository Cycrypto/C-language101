#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#define DEBUG	// ����� ����
double calc_array_avg(int* a, int size);	//�Լ� ����

int main(void)	
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double avg = calc_array_avg(a, 10);	//�Լ� ȣ��

	printf("�迭�� ��� : %.1lf\n", avg);	
	return 0;

}



double calc_array_avg(int* a, int size){
#ifdef DEBUG	//ȣ�� �κ� dbg
	printf("start of clac_array_avg()\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
#endif

	double sum = 0;
		
	for (int i = 0; i < size; i++) {
#ifdef DEBUG	// processing
		printf("%d �� ���ϴ� �� ..\n", i);
#endif
		sum += a[i];
	}

	double avg = sum / size;

#ifdef DEBUG	// ���Ϻκ� dbg
	printf("end of clac_array_avg()\n");
#endif
	return avg;
}


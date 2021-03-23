#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void fill_array(double** M_array, int M, int N) {
	double num = 1;

	for (int p = 0; p < M; p++) {
		for (int q = 0; q < N; q++) {
			M_array[p][q] = num;
			num++;	//숫자를 순서대로 배열에 대입
		}
	}
}
void print_array(double** M_array, int M, int N) {	// 배열을 순서대로 접근하여 출력하는 함수
	printf("Result :\n");
	for (int p = 0; p < M; p++) {
		for (int q = 0; q < N; q++) {
			printf("%5.1lf", M_array[p][q]);

		}
		printf("\n");
	}
}

int main(void) {
	int M, N = 0;
	printf("Enter M, N :");

	scanf("%d %d", &M, &N);	//stdin

	double** M_array;
	M_array = (double**) malloc(sizeof(double) * M);	//행의 수만큼 배열을 동적할당받음
	for (int i = 0; i < M; i++) {	// 더블포인터의 각 행을 열만큼 동적할당 받음
		M_array[i] = (double *)malloc(sizeof(double) * N);
	}
	fill_array(M_array, M, N);	//함수 실행 
	print_array(M_array, M, N);	//함수 실행

	for (int i = 0; i < M; i++) {
		free(M_array[i]);
	}
	free(M_array);
}
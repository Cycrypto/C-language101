#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void fill_array(double** M_array, int M, int N) {
	double num = 1;

	for (int p = 0; p < M; p++) {
		for (int q = 0; q < N; q++) {
			M_array[p][q] = num;
			num++;	//���ڸ� ������� �迭�� ����
		}
	}
}
void print_array(double** M_array, int M, int N) {	// �迭�� ������� �����Ͽ� ����ϴ� �Լ�
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
	M_array = (double**) malloc(sizeof(double) * M);	//���� ����ŭ �迭�� �����Ҵ����
	for (int i = 0; i < M; i++) {	// ������������ �� ���� ����ŭ �����Ҵ� ����
		M_array[i] = (double *)malloc(sizeof(double) * N);
	}
	fill_array(M_array, M, N);	//�Լ� ���� 
	print_array(M_array, M, N);	//�Լ� ����

	for (int i = 0; i < M; i++) {
		free(M_array[i]);
	}
	free(M_array);
}
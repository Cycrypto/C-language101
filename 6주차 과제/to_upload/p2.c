#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand((unsigned)time(0));	// ���� ���� �Լ�

	int arr[12] = { 0, };	//���� ���� ���� �迭
	int mod[12] = { 0, };	//���� * 2 ���� �迭

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {	// ���� ���� �� ���� �� ����
		arr[i] = rand() % 20;
		mod[i] = arr[i] * 2;
	}

	printf("÷�� : ");	// ÷�� ���
	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		printf("%3d", j);
	}

	printf("\n���� : ");	// ���� ���
	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		printf("%3d", arr[j]);
	}

	printf("\n��ȯ : ");	// ��ȯ�� ���
	for (int j = 0; j < sizeof(mod) / sizeof(int); j++) {
		printf("%3d", mod[j]);
	}
}
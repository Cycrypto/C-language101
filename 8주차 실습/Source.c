#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[5][6] = { 0, };	//2���� �迭 ����
	int k = 1;	// ���� ������ k ���� (1~20���� ����)
	int sum = 0;	//��ü ���� �����ϱ� ���� ����
	for (int i = 0; i < 4; i++) {	// 1~20���� �迭 �ʱ�ȭ ����
		for (int j = 0; j < 5; j++) {
			arr[i][j] = k;
			sum += k;	//��ü ���� ���ϴ� ����
			k++;
		}
	}

	for (int i = 0; i < 4; i++) {	// ���� ���� ���� ������ ���� �����ϴ� �ݺ���
		int rsum = 0;
		for (int j = 0; j < 5; j++) {
			rsum += arr[i][j];
		}
		arr[i][5] = rsum;
	}

	for (int i = 0; i < 5; i++) {// ���� ���� ���� ������ �࿡ �����ϴ� �ݺ���
		int csum = 0;
		for (int j = 0; j < 4; j++) {
			csum += arr[j][i];
		}
		arr[4][i] = csum;
	}
	arr[4][5] = sum;	//���� ���� �����ϴ� ���

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%5d", arr[i][j]);	//����ϴ� �κ�.
		}
		printf("\n");
	}
}
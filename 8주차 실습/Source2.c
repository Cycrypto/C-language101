#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char arr[5][5];	// 5by5 �迭 ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {	
			if (i == j || i + j == 4)	// ���� �밢���̰ų� ���밢���� �����̸� X ����
				arr[i][j] = 'X';
			else
				arr[i][j] = 'O';	// �� ������ �ƴϸ� O ����
		}
	}


	for (int i = 0; i < 5; i++) {	// �迭 ���
		for (int j = 0; j < 5; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}
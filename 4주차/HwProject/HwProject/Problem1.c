#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	for (int i = 1; i <= 9; i++) {//i�� 1���� 9���� 1�� ����
		for (int j = 1; j <= 9; j++) {	//j�� 1���� 9���� 1�� ����
			printf("%d*%d=%d\t", j, i, i * j);//ȭ��ó�� ����ϸ� \t�� �̿��� ����
		}
		printf("\n");//�� �� ���
	}
}
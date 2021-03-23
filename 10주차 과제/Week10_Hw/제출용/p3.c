#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char* type, void *a, void *b) {	// �Լ� ������ ����


	if (strcmp(type, "int") == 0) {	// ���� Ÿ���� int ��� 
		int temp = *(int *)a;
		*(int *)a = *(int*) b;
		*(int *)b = temp;	//swap
	}

	else {	//double �̶��
		double temp = *(double *)a;
		*(double *)a = *(double *)b;
		*(double *)b = temp;	//swap
	}
}

int main(void) {
	double first_height, second_height = 0;
	int first_yr, second_yr = 0;	//���� ����

	printf(">ù ��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &first_yr, &first_height);	//ù��° �Է¹ޱ�

	printf(">�� ��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &second_yr, &second_height);	// �ι�° �Է¹ޱ�

	swap("int", &first_yr, &second_yr);
	swap("double", &first_height, &second_height);
	printf(">ù ��° ����� ���̿� Ű%d %.1lf\n", first_yr, first_height);	//���
	printf(">�� ��° ����� ���̿� Ű%d %.1lf", second_yr, second_height);	//���
}
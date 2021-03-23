#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* sales_open;	//�Է� ����
	FILE* result_file;	//�����ؼ� ���� ����
	char company[3];
	long int stock[3];

	sales_open = fopen("sales.txt", "r");	// �Է������� �б� ���� ����
	if (sales_open == NULL) {
		printf("�Է� ������ ���� ���߽��ϴ�");
		return 1;
	}

	result_file = fopen("result.txt", "w");
	if (result_file == NULL) {
		printf("��� ������ ���� ���߽��ϴ�");
		return 1;
	}
	int i = 0;
	int res;
	long int temp;
	while (1) {
		res = fscanf(sales_open, "%c %d", &company[i], &stock[i]);
		if (res == EOF) {
			break;
		}
		i++;


	
	}
	int COUNT = 3;
	for (int i = 0; i < COUNT - 1; i++)
	{
		for (int j = 0; j < COUNT - 1 - i; j++)
		{
			if (stock[j] < stock[j + 1])
			{
				temp = stock[j];
				stock[j] = stock[j + 1];
				stock[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		fprintf(result_file, "%c %d\n", &company[i], stock[i]);
	}
}
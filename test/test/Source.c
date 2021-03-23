#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* sales_open;	//입력 파일
	FILE* result_file;	//정리해서 보낼 파일
	char company[3];
	long int stock[3];

	sales_open = fopen("sales.txt", "r");	// 입력파일을 읽기 모드로 열기
	if (sales_open == NULL) {
		printf("입력 파일을 받지 못했습니다");
		return 1;
	}

	result_file = fopen("result.txt", "w");
	if (result_file == NULL) {
		printf("출력 파일을 받지 못했습니다");
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
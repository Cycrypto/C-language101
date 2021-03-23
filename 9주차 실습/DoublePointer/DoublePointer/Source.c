#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char* type, void *a, void *b) {	// 함수 포인터 선언


	if (strcmp(type, "int") == 0) {	// 만약 타입이 int 라면 
		int temp = *(int *)a;
		*(int *)a = *(int*) b;
		*(int *)b = temp;	//swap
	}

	else {	//double 이라면
		double temp = *(double *)a;
		*(double *)a = *(double *)b;
		*(double *)b = temp;	//swap
	}
}

int main(void) {
	double first_height, second_height = 0;
	int first_yr, second_yr = 0;	//변수 선언

	printf(">첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &first_yr, &first_height);	//첫번째 입력받기

	printf(">두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &second_yr, &second_height);	// 두번째 입력받기

	swap("int", &first_yr, &second_yr);
	swap("double", &first_height, &second_height);
	printf(">첫 번째 사람의 나이와 키%d %.1lf\n", first_yr, first_height);	//출력
	printf(">두 번째 사람의 나이와 키%d %.1lf", second_yr, second_height);	//출력
}
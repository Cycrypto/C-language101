#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void input_data(int* ap, int* bp);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b);
	swap_data();
	print_data(a, b);
	return 0;
}
void input_data(int* ap, int* bp)
{
	printf("두 정수 입력 ==>");
	scanf("%d %d", ap, bp);	// 단순 입력 받기
}
void swap_data(void)
{
	int temp = 0;	//전역변수 swap
	temp = a;
	a = b;
	b = temp;
}
void print_data(int a, int b)
{
	printf("두 정수 출력 ==>");
	printf("%d, %d", a, b);	//단순 출력
}
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
	printf("�� ���� �Է� ==>");
	scanf("%d %d", ap, bp);	// �ܼ� �Է� �ޱ�
}
void swap_data(void)
{
	int temp = 0;	//�������� swap
	temp = a;
	a = b;
	b = temp;
}
void print_data(int a, int b)
{
	printf("�� ���� ��� ==>");
	printf("%d, %d", a, b);	//�ܼ� ���
}
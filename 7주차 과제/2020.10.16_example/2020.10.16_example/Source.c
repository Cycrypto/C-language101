#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];//���ڿ� ������ �迭
	while (1) //���� ����
	{
		printf("���ڿ� : ");
		fgets(str, sizeof(str), stdin);//���ڿ� �Է�
		if (*str != 'x' && *str != 'X')
			printf("�޾Ƹ� : %s\n", str);//���ڿ� ���

		else//x �ԷµǸ�
			break;
	}
	return 0;//���α׷� ����
}
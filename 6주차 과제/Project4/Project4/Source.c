#include <stdio.h>
#include <string.h>

void my_gets(char* str, int size);

int main()
{
	char str[100];//���ڿ��� ������ �迭
	int len;//���ڿ� ���� ���� ����
	int U = 0; //�ҹ��� ī��Ʈ ����
	int L = 0; //�빮�� ī��Ʈ ����
	int N = 0; //���� ī��Ʈ ����

	
	printf("���ڿ�:");//���ڿ� ���
	my_gets(str, sizeof(str));//�� ���� ���ڿ��� �Է��ϴ� �Լ�
	len = strlen(str);//���ڿ� ���� ����

	for (int i = 0; i < len; i++)//i�� 0���� len-1���� �ݺ�
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))//i��° ��Ұ� �빮���̸� U 1����
			U++;
		if (('a' <= str[i]) && (str[i] <= 'z'))//i��° ��Ұ� �ҹ����̸� L 1����
			L++;
		if (('0' <= str[i]) && (str[i] <= '9'))//i��° ��Ұ� �����̸� N ����
			N++;

	}
	printf("�ҹ���: %d\n", L);//�ҹ���: ���
	printf("�빮��: %d\n", U);//�빮��: ���
	printf("����: %d\n", N);//����: ���

	return 0;
}


void my_gets(char* str, int size)//str�� char�迭, size�� �迭�� ũ��
{
	int ch; //getchar�Լ��� ��ȯ���� ������ ����
	int i = 0;//str�迭�� ÷��

	ch = getchar();//ù ��° ���� �Է�
	while ((ch != '\n') && (i < size - 1))//�迭�� ũ�⸸ŭ �Է�
	{
		str[i] = ch;//�Է��� ���ڸ� �迭�� ����
		i++;//÷�� ����
		ch = getchar();//���ο� ���� �Է�
	}
	str[i] = '\0';//�Է��� ���ڿ��� ���� �� ���ڸ� ����
}
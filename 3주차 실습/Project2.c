#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int operation, operators; // ������ , �ǿ�����
	char signal;	//�����ȣ
	printf("��Ģ���� �Է� ���� :");
	scanf(" %d%c%d", &operation, &signal, &operators);


	if (signal == '+') // ���ϱ� ����
		printf("%d + %d = %d", operation, operators, operation + operators);	// ���ϱ� ���� ����

	else if (signal == '-') // ���ϱ� ����
		printf("%d - %d = %d", operation, operators, operation - operators);	// ����  ���� ����

	else if (signal == '*') // ���ϱ� ����
		printf("%d * %d = %d", operation, operators, operation * operators);	// ���ϱ� ���� ����

	else if (signal == '/') // ���ϱ� ����
		if (operators == 0)	// zero division error
			printf("0���� ������ �����ϴ�");

		else
			printf("%d / %d = %d", operation, operators, operation / operators);	// ������  ���� ����
			
	else if (signal == '%') // ���ϱ� ����
		printf("%d %% %d = %d", operation, operators, operation % operators);// ������  ���� ����

	else
		printf("�� �� ���� �����Դϴ�");	//�� �̿��� ���
}

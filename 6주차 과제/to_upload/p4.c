#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void my_gets(char* str, int size) {
	int ch;
	int num[3] = {0, };
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1)) {
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';

	for (int i = 0; i < size; i++) {
		if (str[i] >= 65 && str[i] <= 90)
			num[0]++;	// �빮��

		else if (str[i] >= 97 && str[i] <= 122)
			num[1]++;  // �ҹ���


		else if (str[i] >= 48 && str[i] <= 57)
			num[2]++;  //����


		else
			continue;  // �̿�

	}
	printf("�ҹ��� : %d\n�빮�� : %d\n���� : %d", num[1], num[0], num[2]);

}
int main(void) {
	char str[100];
	printf("���ڿ� : ");
	my_gets(str, sizeof(str));
}
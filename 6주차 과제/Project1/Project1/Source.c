/*long�� ����ߴ��� ǥ�������� �Ѿ �̻��� ���� ���´�.
���� �� ���� �������� ���� ���� ���� �� �Ͽ� unsigned�� ǥ�� ������ �÷��־���,
�ش� ���� ���� ������ ���������� ��µǴ°��� Ȯ���Ͽ����ϴ�.
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	unsigned long input = 0;	//�Է¹��� ���� ����
	int arr[10] = { 0, };	// ���� �Է½� �Է°� ã�� ���� �迭 ����

	printf("���� �Է� : ");
	scanf("%ld", &input);	// ���� �Է¹ޱ�
	do {					// �Է¹��� ������ 0 �̻��϶����� �ݺ��� ����
		arr[input % 10]++;	// ������ 10���� ���� �������� ���� �ε��� ���� (0 ~ 9 ���� ��)
		input /= 10;		// �Է¹��� ���� ������Ʈ
	} while (input > 0);	//�ݺ��� Ż������

	printf("\n���� : \t\t");
	for (int i = 0; i < 10; i++) {	// 0 ~ 9 ���� ���
		printf("%3ld",i);
	}
	printf("\n�߻�Ƚ�� : \t");

	for (int i = 0; i < 10; i++) {	// �߻�Ƚ���� ����� �迭 ����
		printf("%3ld", arr[i]);
	}
}

*/
#include <stdio.h>
int main(void) {
	int arr[10] = { 0, };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%3d", i);
	}
}
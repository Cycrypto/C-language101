#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int TransDegree(int nDegree, int nType);	// ���� ��ȯ �Լ� ����

int main(void) {	// main �Լ�
	int select = 0,temp = 0, retn = 0;	// ���� ����

	printf("�µ�(N>0) : ");
	scanf("%d", &temp);		//�µ� �Է�

	printf("����(0), ȭ��(1) : ");
	scanf("%d", &select);	// ���� �Է�

	retn = TransDegree(temp, select);

	if (retn == -99)
		printf("����");

	if (select == 1)	//���� ������ 1�̶��
		printf("���� ==> ȭ�� : %d", retn);

	else                //���� ������ �� �̿ܶ��
		printf("���� ==> ȭ�� : %d", retn);

}

int TransDegree(int nDegree, int nType) {
	int val = 0;	// ���� ���� ����
	if (nType == 1)
		val = (nDegree - 32) * 5 / 9;	//�µ� ��ȯ	��-> ȭ

	else if (nType == 0)
		val = nDegree * 9 / 5 + 32;	//�µ� ��ȯ	ȭ -> ��

	else {
		return -99;	// ->  �̿��� ���
	}
	return val;
}
#define _CRT_SECURE_NO_WARNINGS	//scanf ����ϱ� ���� ����
#include <stdio.h>	// ǥ�� ����� ����ϱ� ���� ���
int main(void) {	// main �Լ�

	float height = 0, weight = 0, bmi = 0;	// Ű ������ bmi ������ float �������� ���� / 0 ���� �ʱ�ȭ

	scanf("%f %f",&weight, & height);	// �� �Է¹���
	
	bmi = weight / ((height / 100) * (height/ 100));	// BMI ��� ��
	
	if (bmi >= 20.0 && bmi <= 25.0)	// ǥ�� ���� &&�� �����Ͽ� �� ���� ��� ������ ǥ���Դϴ� ���
		printf("ǥ���Դϴ�");
	else
		printf("ü�� ������ �ʿ��մϴ�");	// �� �̿��� ��� ü�߰��� �ʿ� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void){
	int a,b,c = 0;
	
	printf ("���� ������ �Է��ϼ��� :");	// ��� ���¿� �´� printf 
	scanf ("%d %d %d",&a, &b, &c);		// scanf�� a,b,c�� �Է°��� ���� �޾��� 
	printf("�Է��� ������ : %d, %d, %d\n",a,b,c);  // ��� ���¿� �´� printf
	printf("�� : %d\n",a+b+c);			// ���� ����ϴ� �κ� 
	printf("��� : %.1f\n",(a+b+c)/3.0);	//a+b+c = sum���� �δ� ������ ����� ���� --> sum / 3 ���� �� �� �� ���� 
											// float / float�� �Ҽ��� 1�ڸ����� ���	
}

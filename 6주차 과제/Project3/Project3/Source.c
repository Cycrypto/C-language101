#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto);  // �迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto);  // �迭�� ����� ���� ����ϴ� �Լ�
int main(void){

	int lotto_nums[6];            // �ζ� ��ȣ�� ������ �迭
	input_nums(lotto_nums);       // �Է��Լ� ȣ��
	print_nums(lotto_nums);       // ����Լ� ȣ��

	return 0;

}

void input_nums(int* lotto){
	int memoiz[46] = { 0, };	// �Է°��� �����ϴ��� ����
	int temp = 0;		// �ӽ� ���� ���� ����
	for (int i = 0; i < 6; i++) {
		printf("��ȣ �Է� :");
		scanf("%d", &temp);
		
		if (!(temp > 0 && temp <= 45)) {	// 1���� 45 �̳��� ������ ���� �� �ֵ��� ���� �߰�
			printf("���� �ʴ� �����Դϴ�!\n");	// ���� �� ������ �߰����� �ʴ´ٸ� �ߺ��� ������ ó���ع���.
			i--;
		}

		else if (memoiz[temp] != 0) {	// memoiz�� ������ ���� �Էµƴ��� Ȯ���ϴ� �뵵
			printf("���� ��ȣ�� �ֽ��ϴ�!\n");	
			i--;	// i ���� �ϳ� �ٿ��ָ鼭 �ش� ���� ������ ��ȿȭ��.
		}

		else {
			lotto[i] = temp;
			memoiz[temp]++;	// ���� ������ ���� ���� ��ȣ���
		}
	}
}

void print_nums(int* lotto){
	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++) {	// �迭 �����͸� ���ƴٴϸ鼭 ��ȣ�� �����.
		printf("%3d", lotto[i]);
	}
}
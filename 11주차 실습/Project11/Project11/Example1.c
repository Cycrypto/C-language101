#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct profile {// ��� ������ �����ϴ� ����ü ����
	char name[20];  // ����� �̸�
	double grade;// ����
	int english;// ���� ����
};


void input_data(struct profile* Profile) {
	printf("�̸�, ����, ���������� �Է��ϼ���.\n");
	for (int i = 0; i < 5; i++) {
		scanf("%s %lf %d", &Profile[i].name, &Profile[i].grade, &Profile[i].english);	//������ ��ҿ� �Է� �ޱ�
	}

} // ����ü ������ �����͸� �Է��ϴ� �Լ� ����

void elite(struct profile* Profile) {
	printf("\n------- elite ��� ��� -------\n");
	for (int i = 0; i < 5; i++) {
		if (Profile[i].grade >= 4.0 && Profile[i].english >= 900)	//���� Ȯ��
			printf("%s, %.1lf, %d\n", Profile[i].name, Profile[i].grade, Profile[i].english);	//������ ���
		else
			continue;	//�ƴϸ� pass
	}
} // ����Ʈ ����� ����ϴ� �Լ� ����

int main(void){
	struct profile new_staff[5];

	input_data(new_staff);
	elite(new_staff);

	return 0;
}
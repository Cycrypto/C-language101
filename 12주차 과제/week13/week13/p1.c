#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct profile {	//����ü ����
	char name[20];
	double grade;
	int english;
};

void input_data(struct profile* employee) {// ����ü ������ �����͸� �Է��ϴ� �Լ� ����	
	printf("�̸�, ����, ���������� �Է��ϼ���.\n");
	for (int i = 0; i < sizeof(*employee) / sizeof(double); i++) {
		scanf("%s %lf %d", &(employee[i].name), &(employee[i].grade), &(employee[i].english));	// ����ü �迭 element�� ���� ��, ����
	}
	
}

void elite(struct profile* employee) { // ����Ʈ ����� ����ϴ� �Լ� ����
	printf("------- elite ��� ��� -------\n");
	
	for (int i = 0; i < sizeof(*employee) / sizeof(double); i++) {	// ����ü �迭�� ũ�⸸ŭ

		if (employee[i].grade >= 4.0 && employee[i].english >= 900)	//���ǽ�
			printf("%s %.1lf, %d\n", employee[i].name, employee[i].grade, employee[i].english);
		else
			continue;
	}
}

int main(void) {
	struct profile new_staff[10];
	input_data(new_staff);
	elite(new_staff);

	return 0;
}
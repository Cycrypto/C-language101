#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct profile {	//구조체 생성
	char name[20];
	double grade;
	int english;
};

void input_data(struct profile* employee) {// 구조체 변수에 데이터를 입력하는 함수 원형	
	printf("이름, 학점, 영어점수를 입력하세요.\n");
	for (int i = 0; i < sizeof(*employee) / sizeof(double); i++) {
		scanf("%s %lf %d", &(employee[i].name), &(employee[i].grade), &(employee[i].english));	// 구조체 배열 element에 접근 후, 대입
	}
	
}

void elite(struct profile* employee) { // 엘리트 사원을 출력하는 함수 원형
	printf("------- elite 사원 명단 -------\n");
	
	for (int i = 0; i < sizeof(*employee) / sizeof(double); i++) {	// 구조체 배열의 크기만큼

		if (employee[i].grade >= 4.0 && employee[i].english >= 900)	//조건식
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
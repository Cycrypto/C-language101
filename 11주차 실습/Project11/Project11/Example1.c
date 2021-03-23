#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct profile {// 사원 정보를 저장하는 구조체 선언
	char name[20];  // 사원의 이름
	double grade;// 학점
	int english;// 영어 점수
};


void input_data(struct profile* Profile) {
	printf("이름, 학점, 영어점수를 입력하세요.\n");
	for (int i = 0; i < 5; i++) {
		scanf("%s %lf %d", &Profile[i].name, &Profile[i].grade, &Profile[i].english);	//각각의 요소에 입력 받기
	}

} // 구조체 변수에 데이터를 입력하는 함수 원형

void elite(struct profile* Profile) {
	printf("\n------- elite 사원 명단 -------\n");
	for (int i = 0; i < 5; i++) {
		if (Profile[i].grade >= 4.0 && Profile[i].english >= 900)	//조건 확인
			printf("%s, %.1lf, %d\n", Profile[i].name, Profile[i].grade, Profile[i].english);	//맞으면 출력
		else
			continue;	//아니면 pass
	}
} // 엘리트 사원을 출력하는 함수 원형

int main(void){
	struct profile new_staff[5];

	input_data(new_staff);
	elite(new_staff);

	return 0;
}
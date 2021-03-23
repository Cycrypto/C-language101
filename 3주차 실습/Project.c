#define _CRT_SECURE_NO_WARNINGS	//scanf 사용하기 위한 선언
#include <stdio.h>	// 표준 입출력 사용하기 위한 헤더
int main(void) {	// main 함수

	float height = 0, weight = 0, bmi = 0;	// 키 몸무게 bmi 변수를 float 형식으로 선언 / 0 으로 초기화

	scanf("%f %f",&weight, & height);	// 값 입력받음
	
	bmi = weight / ((height / 100) * (height/ 100));	// BMI 계산 식
	
	if (bmi >= 20.0 && bmi <= 25.0)	// 표준 조건 &&로 연결하여 두 조건 모두 만족시 표준입니다 출력
		printf("표준입니다");
	else
		printf("체중 관리가 필요합니다");	// 그 이외의 경우 체중관리 필요 출력

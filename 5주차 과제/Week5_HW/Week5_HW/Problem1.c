
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int input = 0;	//삼각형의 높이를 받을 변수

	printf("삼각형의 높이는? ==>");
	scanf("%d", &input);	//삼각형의 높이를 받음


	for (int i = 1; i <= input; i++) {	// 열 반복문 (입력받은 만큼 층수를 만들어줌)
		for (int j = i; j < input; j++) {	// 공백 반복문 (input * 2) / 2  ==> input 만큼 공백 생성 층수가 올라갈수록 공백 수는 1칸씩 줄어든다.
			printf(" ");
		}

		for (int k = 0; k < i * 2 - 1; k++) {	// 2 * i - 1 조건으로 (홀수 수열) # 출력한다
			printf("#");
		}

		printf("\n");	// 행 바꿈
	}
}

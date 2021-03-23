#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n);	//펙토리얼 함수 정의

int main(void) {
	int input = 0;	// 입력을 받을 변수
	printf("양의 정수 :");
	scanf("%d", &input);	// 입력 받음

	printf("팩토리얼 : ");
	printf("%d", factorial(input));	//입력 받은 수를 함수의 인자로 넘겨줌
}

int factorial(int n) {	// 펙토리얼 함수	(단 n이 int형이므로 표현범위 이상을 나가면 오버플로우가 난다.) ==> 12!까지는 정상적으로 나옴
	int fact = 1;	//펙토리얼을 저장할 변수 (0이면 곱해도 0이므로 1로 초기화)
	for (int i = 1; i <= n; i++) {	// i 반복문 돌면서 n 까지 곱해줌
		fact *= i;
	}
	return fact;	//fact 리턴
}
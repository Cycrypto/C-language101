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
	if (n == 1) {	//탈출조건
		return 1;	// 10부터 1까지 n을 줄여나가면서 1이되면 return 1하고 재귀 함수 끝냄
	}

	else {
		return factorial(n - 1) * n;	//만약 1보다 큰 수가 n이라면 n * (n-1)! 계산
	}
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int operation, operators; // 연산자 , 피연산자
	char signal;	//연산기호
	printf("사칙연산 입력 정수 :");
	scanf(" %d%c%d", &operation, &signal, &operators);


	if (signal == '+') // 더하기 연산
		printf("%d + %d = %d", operation, operators, operation + operators);	// 더하기 연산 수행

	else if (signal == '-') // 더하기 연산
		printf("%d - %d = %d", operation, operators, operation - operators);	// 빼기  연산 수행

	else if (signal == '*') // 더하기 연산
		printf("%d * %d = %d", operation, operators, operation * operators);	// 곱하기 연산 수행

	else if (signal == '/') // 더하기 연산
		if (operators == 0)	// zero division error
			printf("0으로 나눌수 없습니다");

		else
			printf("%d / %d = %d", operation, operators, operation / operators);	// 나누기  연산 수행
			
	else if (signal == '%') // 더하기 연산
		printf("%d %% %d = %d", operation, operators, operation % operators);// 나머지  연산 수행

	else
		printf("할 수 없는 연산입니다");	//그 이외의 결과
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int i = 0; i <= 9; i++) {	// 행
		for (int j = 0; j <= 9; j++) {	//열
			printf("%d\t", i + j * 10);	// 열 증가 (n열 = k 일때 n+i열 = k + 10 * i)
		}
		printf("\n");	// 줄 바꿈
	}
}

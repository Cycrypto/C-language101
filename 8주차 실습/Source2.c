#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char arr[5][5];	// 5by5 배열 선언
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {	
			if (i == j || i + j == 4)	// 만약 대각선이거나 역대각선인 조건이면 X 저장
				arr[i][j] = 'X';
			else
				arr[i][j] = 'O';	// 위 조건이 아니면 O 저장
		}
	}


	for (int i = 0; i < 5; i++) {	// 배열 출력
		for (int j = 0; j < 5; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}
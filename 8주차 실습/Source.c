#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[5][6] = { 0, };	//2차원 배열 선언
	int k = 1;	// 값을 저장할 k 선언 (1~20까지 저장)
	int sum = 0;	//전체 합을 저장하기 위한 변수
	for (int i = 0; i < 4; i++) {	// 1~20까지 배열 초기화 해줌
		for (int j = 0; j < 5; j++) {
			arr[i][j] = k;
			sum += k;	//전체 합을 구하는 과정
			k++;
		}
	}

	for (int i = 0; i < 4; i++) {	// 행의 합을 구해 마지막 열에 저장하는 반복문
		int rsum = 0;
		for (int j = 0; j < 5; j++) {
			rsum += arr[i][j];
		}
		arr[i][5] = rsum;
	}

	for (int i = 0; i < 5; i++) {// 열의 합을 구해 마지막 행에 저장하는 반복문
		int csum = 0;
		for (int j = 0; j < 4; j++) {
			csum += arr[j][i];
		}
		arr[4][i] = csum;
	}
	arr[4][5] = sum;	//최종 합을 저장하는 경우

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%5d", arr[i][j]);	//출력하는 부분.
		}
		printf("\n");
	}
}
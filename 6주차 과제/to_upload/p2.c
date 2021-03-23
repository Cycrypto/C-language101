#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand((unsigned)time(0));	// 난수 생성 함수

	int arr[12] = { 0, };	//원본 난수 저장 배열
	int mod[12] = { 0, };	//원본 * 2 저장 배열

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {	// 난수 생성 후 각각 값 대입
		arr[i] = rand() % 20;
		mod[i] = arr[i] * 2;
	}

	printf("첨자 : ");	// 첨자 출력
	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		printf("%3d", j);
	}

	printf("\n원본 : ");	// 원본 출력
	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		printf("%3d", arr[j]);
	}

	printf("\n변환 : ");	// 변환본 출력
	for (int j = 0; j < sizeof(mod) / sizeof(int); j++) {
		printf("%3d", mod[j]);
	}
}
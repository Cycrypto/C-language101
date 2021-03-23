/*long을 사용했더니 표현범위를 넘어가 이상한 값이 나온다.
문제 를 보니 음수값이 나올 일이 없을 듯 하여 unsigned로 표현 범위를 늘려주었고,
해당 범위 내의 정수는 정상적으로 출력되는것을 확인하였습니다.
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	unsigned long input = 0;	//입력받을 변수 선언
	int arr[10] = { 0, };	// 정수 입력시 입력값 찾기 위한 배열 선언

	printf("숫자 입력 : ");
	scanf("%ld", &input);	// 정수 입력받기
	do {					// 입력받은 정수가 0 이상일때동안 반복문 실행
		arr[input % 10]++;	// 정수를 10으로 나눠 나머지의 값의 인덱스 증가 (0 ~ 9 사이 값)
		input /= 10;		// 입력받은 정수 업데이트
	} while (input > 0);	//반복문 탈출조건

	printf("\n숫자 : \t\t");
	for (int i = 0; i < 10; i++) {	// 0 ~ 9 까지 출력
		printf("%3ld",i);
	}
	printf("\n발생횟수 : \t");

	for (int i = 0; i < 10; i++) {	// 발생횟수가 저장된 배열 실행
		printf("%3ld", arr[i]);
	}
}

*/
#include <stdio.h>
int main(void) {
	int arr[10] = { 0, };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%3d", i);
	}
}
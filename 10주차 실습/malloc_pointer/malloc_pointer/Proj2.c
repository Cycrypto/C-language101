#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char** argv) {

	if (argc < 3) {
		printf("인수를 제대로 전달해 주세요.\n");	//전달된 값이 3보다 작은 경우
		return 0;
	}

	if (strcmp(argv[1], "-u") == 0) {	//toUpper
		printf("-u :");
		for (int i = 0; i < strlen(argv[2]); i++) {	//toUpper의 경우 '문자'를 변경하므로
			printf("%c", toupper(*(*(argv + 2) + i)));//문자열의 길이만큼 반복문 실행
		}
	}

	else if (strcmp(argv[1], "-l") == 0) {
		printf("-l :");
		for (int i = 0; i < strlen(argv[2]); i++) {	//toLower의 경우 '문자'를 변경하므로
			printf("%c", tolower(*(*(argv + 2) + i)));//문자열의 길이만큼 반복문 실행
		}
	}

	else if (strcmp(argv[1], "-p") == 0) {//그대로 출력하는 옵션
		printf("%s",argv[2]);
	}

	else {
		printf("지원되지 않는 옵션입니다\n");	//옵션 값이 오류가 났을 떄
	}
}
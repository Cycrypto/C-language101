#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define LINES 10

int getline(char* buffer, int max_num)
{
	fflush(stdin);	// 버퍼를 비워주는 역할

	fgets(buffer, max_num , stdin);	// 표준 입력으로 문자열 저장
	if (strlen(buffer) == 1) {	//엔터인 경우 (개행문자만 포함된 상태)
		buffer[strlen(buffer) - 1] = '\0';	//마지막 개행문자 제거
		return 0;	//0을 반환하여 Main 함수의 반복문을 탈출
	}

	else {
		buffer[strlen(buffer) - 1] = '\0';// 그 이외의 경우
		return 1;	//그 이외의 경우 1을 반환함.
	}
	
}

void revline(char* line)
{
	int line_length = strlen(line);	//라인의 길이를 저장함.
	for (int i = 0; i < line_length / 2; i++) {	//라인의 문자열을 바꾸는 기능을 함
		int temp = line[i];
		line[i] = line[line_length - i - 1];
		line[line_length - i - 1] = temp;
	}
}
int main(void)
{
	char* line[LINES];
	char buf[MAX];
	int num = 0;

	printf("문장을 입력하시오 (종료하려면 라인의 첫문자로 엔터를 칠 것)...\n");
	while (getline(buf, MAX) != 0) // getline(): 한 라인을 읽어서 buf에 저장함
	{
		line[num] = (char *)malloc(strlen(buf)); // 빈 칸 채우기
		strcpy(line[num], buf); // 빈 칸 채우기

		//printf("%s\n", line[num]);
		num++;

	}
	printf("\n입력한 문장의 역순 출력 결과...\n");

	for (int i = 0; i < num; i++) // 빈 칸 채우기
	{
		revline(line[i]); // revline(): 한 라인의 문장을 뒤집음
		printf("%s\n", line[i]);
	}
	return 0;
}
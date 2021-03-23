#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];//문자열 저장할 배열
	while (1) //무한 루프
	{
		printf("문자열 : ");
		fgets(str, sizeof(str), stdin);//문자열 입력
		if (*str != 'x' && *str != 'X')
			printf("메아리 : %s\n", str);//문자열 출력

		else//x 입력되면
			break;
	}
	return 0;//프로그램 종료
}
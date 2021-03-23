#include <stdio.h>
#include <string.h>

void my_gets(char* str, int size);

int main()
{
	char str[100];//문자열을 저장할 배열
	int len;//문자열 길이 저장 변수
	int U = 0; //소문자 카운트 변수
	int L = 0; //대문자 카운트 변수
	int N = 0; //숫자 카운트 변수

	
	printf("문자열:");//문자열 출력
	my_gets(str, sizeof(str));//한 줄의 문자열을 입력하는 함수
	len = strlen(str);//문자열 길이 저장

	for (int i = 0; i < len; i++)//i는 0부터 len-1까지 반복
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))//i번째 요소가 대문자이면 U 1증가
			U++;
		if (('a' <= str[i]) && (str[i] <= 'z'))//i번째 요소가 소문자이면 L 1증가
			L++;
		if (('0' <= str[i]) && (str[i] <= '9'))//i번째 요소가 숫자이면 N 증가
			N++;

	}
	printf("소문자: %d\n", L);//소문자: 출력
	printf("대문자: %d\n", U);//대문자: 출력
	printf("숫자: %d\n", N);//숫자: 출력

	return 0;
}


void my_gets(char* str, int size)//str은 char배열, size는 배열의 크기
{
	int ch; //getchar함수의 반환값을 저장할 변수
	int i = 0;//str배열의 첨자

	ch = getchar();//첫 번째 문자 입력
	while ((ch != '\n') && (i < size - 1))//배열의 크기만큼 입력
	{
		str[i] = ch;//입력한 문자를 배열에 저장
		i++;//첨자 증가
		ch = getchar();//새로운 문자 입력
	}
	str[i] = '\0';//입력한 문자열의 끝에 널 문자를 저장
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int TransDegree(int nDegree, int nType);	// 각도 변환 함수 선언

int main(void) {	// main 함수
	int select = 0,temp = 0, retn = 0;	// 변수 선언

	printf("온도(N>0) : ");
	scanf("%d", &temp);		//온도 입력

	printf("섭씨(0), 화씨(1) : ");
	scanf("%d", &select);	// 선택 입력

	retn = TransDegree(temp, select);

	if (retn == -99)
		printf("오류");

	if (select == 1)	//만약 선택이 1이라면
		printf("섭씨 ==> 화씨 : %d", retn);

	else                //만약 선택이 그 이외라면
		printf("섭씨 ==> 화씨 : %d", retn);

}

int TransDegree(int nDegree, int nType) {
	int val = 0;	// 내부 변수 선언
	if (nType == 1)
		val = (nDegree - 32) * 5 / 9;	//온도 변환	섭-> 화

	else if (nType == 0)
		val = nDegree * 9 / 5 + 32;	//온도 변환	화 -> 섭

	else {
		return -99;	// ->  이외의 경우
	}
	return val;
}
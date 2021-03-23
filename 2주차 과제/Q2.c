#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void){
	int a,b,c = 0;
	
	printf ("정수 세개를 입력하세요 :");	// 출력 형태에 맞는 printf 
	scanf ("%d %d %d",&a, &b, &c);		// scanf로 a,b,c에 입력값을 각각 받아줌 
	printf("입력한 정수는 : %d, %d, %d\n",a,b,c);  // 출력 형태에 맞는 printf
	printf("합 : %d\n",a+b+c);			// 합을 출력하는 부분 
	printf("평균 : %.1f\n",(a+b+c)/3.0);	//a+b+c = sum으로 두는 변수를 만들기 가능 --> sum / 3 으로 할 수 도 있음 
											// float / float로 소수점 1자리까지 출력	
}

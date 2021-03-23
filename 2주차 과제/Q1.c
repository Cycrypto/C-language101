#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
	printf("**********************************\n");		// 열을 나누는 * 출력 
	printf("\t모음\t10진수\t16진수\n");				
	printf("**********************************\n");		// 열을 나누는 * 출력
	printf("\t%c\t%d\t0x%x\n",'A','A','A');				// \t : tap , %c : 문자 출력 , %x16진수 출력 
	printf("\t%c\t%d\t0x%x\n",'E','E','E');				// 16진수 앞에 0x를 붙여 출력형 
	printf("\t%c\t%d\t0x%x\n",'I','I','I');
	printf("\t%c\t%d\t0x%x\n",'O','O','O');
	printf("\t%c\t%d\t0x%x\n",'U','U','U');
	printf("**********************************\n");		// 열을 나누는 * 출력
}

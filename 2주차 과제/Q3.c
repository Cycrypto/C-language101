#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){
	int num;
	scanf("%d",&num);
	do{
		printf("%d", num % 10);
		num = num / 10;
	}while(num);
	
	printf("\n");
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	for (int i = 1; i <= 9; i++) {//i를 1부터 9까지 1씩 증가
		for (int j = 1; j <= 9; j++) {	//j를 1부터 9까지 1씩 증가
			printf("%d*%d=%d\t", j, i, i * j);//화면처럼 출력하며 \t을 이용해 정렬
		}
		printf("\n");//한 줄 띄기
	}
}
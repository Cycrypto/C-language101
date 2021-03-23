#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void double_swap(char** ppa, int cnt) {
	int j = 0;
	for (int i = 0; i < cnt; i++) {
		printf("%c", *(ppa[i]+j));
		j++;
	}
}

int main(void) {
	int arr[4] = { 1,2,3,4 };
	int(*pa)[2];
	pa = arr;
	printf("%d %d", *(*(pa)+1), *pa[1]);
}
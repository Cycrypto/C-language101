#include <stdio.h>
#include "array.h"

void print_array(int* a, int b) {
	printf("[ ");
	for (int i = 0; i < b; i++) {
		printf("%d ", a[i]);
	}
	printf(" ]\n");
}
int get_sum_of_array(int* a, int b) {
	int sum = 0;
	for (int i = 0; i < b; i++) {
		sum += a[i];
	}
	return sum;
}
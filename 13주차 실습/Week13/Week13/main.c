#include <stdio.h>
#include "array.h"



int main(void){
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_array(a, 10);
	int sum = get_sum_of_array(a, 10);

	printf("배열 요소 들의 합 : %d\n", sum);

	return 0;
}
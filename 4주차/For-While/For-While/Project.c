#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void) {
	int a = 0;
	do {
		scanf("%d", &a);
	} while (a < 0);
}
*/

/*
int main(void) {
	for (int i = 0; i < 5; i++) {
		printf("Be happy\n");
	}
}
*/

/*
int main(void) {
	int i;
	for (i = 0; i < 10; i++) {
		printf("$");
	}
	return 0;
}
*/

// 1 : 12번
// 2 : 9번

/*
int main(void) {
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (j == i || i + j == 4)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
*/

/*
float centi_to_meter(float centi);

int main(void) {
	float res;
	res = centi_to_meter(187);
	printf("%.2lfm\n", res);

	return 0;
}

float centi_to_meter(float centi) {
	float result = centi / 100;
	return result;
}
*/

// 1 : 2
/*
void sum(int param);
int main(void) {
	sum(10);
	sum(100);
	return 0;
}
void sum(int param) {
	int s_sum = 0;
	for (int i = 1; i <= param; i++)
		s_sum += i;

	printf("1부터 %d까지의 합은 %d 입니다\n",param, s_sum);
}
*/
/*
   IDEA:
   2와 3은 소수이다, --> 기본적으로 들어갈 수
   마지막 인덱스를 나타내는 변수를 만든다 --> current_index
   0부터 current_index까지 담겨있는 수를 피제수 i와
   나누어서 떨어지면 소수가 아니다 --> 한개라도 나누어떨어진다면 소수가 아니다.

   담긴 수를 끝까지 비교 검사했을때 소수이면 소수 인덱스에 추가하고
   current_window를 1 더한다.


   n 번의 수는 이전의 소수들과 비교했을 때 나누어떨어지면 소수가 아니다.
*/

/*
int main(void) {
   int arr[1000] = { 0, }; // 배열의 초기화
   int input = 0;
   int i = 4, idx = 2;
   int current_index = 2;   // 소수가 저장되어있는 위치를 나타내기 위한 변수
   arr[0] = 2, arr[1] = 3;   // 특별한 경우 두가지

   printf("2 이상의 정수를 입력하세요 : ");
   scanf("%d", &input);

   while (idx < input) {
	  for (int j = 0; j < current_index; j++) {
		 if (i % arr[j] == 0)
			break;

		 if (j + 1 == current_index && i % arr[j] != 0) {
			arr[current_index] = i;      // [2, 3, 5, 7 11]
			current_index++;
			idx++;
		 }
	  }
	  i++;
   }

   int dx = 0;
   for (int i = 0; i < input;) {
	   if (arr[i] > input)
		   break;
	   for (dx; dx < 5; dx++, i++) {
		   printf("%d ", arr[i]);
	   }
	   printf("\n");
	   dx = 0;
   }
}

*/
int sum = 0;

int rec_func(int n);
int main(void) {
	printf("%d", rec_func(10));
}

int rec_func(int n) {
	int i = 0;
	if (i == n)
		return;
	else {
		i++;
		sum += rec_func(n - i);
	}
	printf("%d\n", sum);
	return n;
}
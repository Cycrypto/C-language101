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

// 1 : 12��
// 2 : 9��

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

	printf("1���� %d������ ���� %d �Դϴ�\n",param, s_sum);
}
*/
/*
   IDEA:
   2�� 3�� �Ҽ��̴�, --> �⺻������ �� ��
   ������ �ε����� ��Ÿ���� ������ ����� --> current_index
   0���� current_index���� ����ִ� ���� ������ i��
   ����� �������� �Ҽ��� �ƴϴ� --> �Ѱ��� ����������ٸ� �Ҽ��� �ƴϴ�.

   ��� ���� ������ �� �˻������� �Ҽ��̸� �Ҽ� �ε����� �߰��ϰ�
   current_window�� 1 ���Ѵ�.


   n ���� ���� ������ �Ҽ���� ������ �� ����������� �Ҽ��� �ƴϴ�.
*/

/*
int main(void) {
   int arr[1000] = { 0, }; // �迭�� �ʱ�ȭ
   int input = 0;
   int i = 4, idx = 2;
   int current_index = 2;   // �Ҽ��� ����Ǿ��ִ� ��ġ�� ��Ÿ���� ���� ����
   arr[0] = 2, arr[1] = 3;   // Ư���� ��� �ΰ���

   printf("2 �̻��� ������ �Է��ϼ��� : ");
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
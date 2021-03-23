#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
	int number; // 객차 번호
	int seats; // 좌석 수
	Train* next;
};

void print_train(Train*); //객차 번호와 좌석수를 출력하는 함수원형

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	int train_seats[5] = { 20, 40, 40, 40, 30 }; // 객차별 좌석수 정보

	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
			if (head == NULL) {
				printf("메모리가 부족합니다!!\n");
				exit(1);
			}
			head->number = i + 1; // 객차 번호는 1부터 시작
			head->seats = train_seats[i];
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			if (tail->next == NULL) {
				printf("메모리가 부족합니다!!\n");
				exit(1);
			}

			tail = tail -> next; // 빈 칸을 채울 것
			tail->number = i + 1;
			tail->seats = train_seats[i];
			tail->next = NULL; // 빈 칸을 채울 것
		}
	}

	print_train(head); // 객차 번호와 좌석수 출력

	return 0;
}

//객차 번호와 좌석수를 출력하는 함수
void print_train(Train* tp)
{
	while (tp->next != NULL) {
		printf("[%d번 객차, 좌석수:%d]-> ",tp->number, tp->seats);
		tp = tp->next;
	}
	printf("[%d번 객차, 좌석수:%d]", tp->number, tp->seats);
}
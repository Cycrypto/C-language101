#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct train Train; // 타입 재정의하여 struct train -> Train으로 재정의한다.

struct train {	//train 구조체 생성
	int seats;
	struct train* next;
};

void print_train(Train* T) {	//T = head
	int i = 1;

	while (T->next!= 0xCDCDCDCD) {	//0xcdcdcdcd 는 초기화되지 않은 동적 메모리 할당 시 들어가는 heap 메모리주소임,
		printf("[%d번객차, 좌석수 %d]->", i, T->seats);	//추측으론 구조체 내의 포인터를 만들어놓고 사용을 하지 않아서인거 같다.
		T = T->next;
		i++;
	}
	printf("[%d번객차, 좌석수 %d]", i, T->seats);	//마지막 출력하는 부분
}

int main(void) {
	Train* head = NULL, *tail = NULL;	//head와 tail 포인터 생성 후 NULL로 초기화 한다.
	int seat_info[5] = { 20, 40, 40, 40, 30 };
	int i;

	for (i = 0; i < 5; i++) {
		if (head == NULL) {	//head가 초기화되지 않았다면 head와 tail 노드를 만들어준다
			head = tail = (Train*)malloc(sizeof(Train));
			head->seats = seat_info[i];
		}
		
		else {//크기만큼 증가시키면서 node를 만들어주고, Tail node 또한 움직여준다.
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
			tail->seats = seat_info[i];
		}
	}
	print_train(head);	//head 노드의 메모리주소를 함수로 넘겨준다.
}
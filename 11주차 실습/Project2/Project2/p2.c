#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct train Train; // Ÿ�� �������Ͽ� struct train -> Train���� �������Ѵ�.

struct train {	//train ����ü ����
	int seats;
	struct train* next;
};

void print_train(Train* T) {	//T = head
	int i = 1;

	while (T->next!= 0xCDCDCDCD) {	//0xcdcdcdcd �� �ʱ�ȭ���� ���� ���� �޸� �Ҵ� �� ���� heap �޸��ּ���,
		printf("[%d������, �¼��� %d]->", i, T->seats);	//�������� ����ü ���� �����͸� �������� ����� ���� �ʾƼ��ΰ� ����.
		T = T->next;
		i++;
	}
	printf("[%d������, �¼��� %d]", i, T->seats);	//������ ����ϴ� �κ�
}

int main(void) {
	Train* head = NULL, *tail = NULL;	//head�� tail ������ ���� �� NULL�� �ʱ�ȭ �Ѵ�.
	int seat_info[5] = { 20, 40, 40, 40, 30 };
	int i;

	for (i = 0; i < 5; i++) {
		if (head == NULL) {	//head�� �ʱ�ȭ���� �ʾҴٸ� head�� tail ��带 ������ش�
			head = tail = (Train*)malloc(sizeof(Train));
			head->seats = seat_info[i];
		}
		
		else {//ũ�⸸ŭ ������Ű�鼭 node�� ������ְ�, Tail node ���� �������ش�.
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
			tail->seats = seat_info[i];
		}
	}
	print_train(head);	//head ����� �޸��ּҸ� �Լ��� �Ѱ��ش�.
}
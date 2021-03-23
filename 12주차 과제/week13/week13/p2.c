#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
	int number; // ���� ��ȣ
	int seats; // �¼� ��
	Train* next;
};

void print_train(Train*); //���� ��ȣ�� �¼����� ����ϴ� �Լ�����

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	int train_seats[5] = { 20, 40, 40, 40, 30 }; // ������ �¼��� ����

	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
			if (head == NULL) {
				printf("�޸𸮰� �����մϴ�!!\n");
				exit(1);
			}
			head->number = i + 1; // ���� ��ȣ�� 1���� ����
			head->seats = train_seats[i];
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			if (tail->next == NULL) {
				printf("�޸𸮰� �����մϴ�!!\n");
				exit(1);
			}

			tail = tail -> next; // �� ĭ�� ä�� ��
			tail->number = i + 1;
			tail->seats = train_seats[i];
			tail->next = NULL; // �� ĭ�� ä�� ��
		}
	}

	print_train(head); // ���� ��ȣ�� �¼��� ���

	return 0;
}

//���� ��ȣ�� �¼����� ����ϴ� �Լ�
void print_train(Train* tp)
{
	while (tp->next != NULL) {
		printf("[%d�� ����, �¼���:%d]-> ",tp->number, tp->seats);
		tp = tp->next;
	}
	printf("[%d�� ����, �¼���:%d]", tp->number, tp->seats);
}
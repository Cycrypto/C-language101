#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char planets[][20] = {	//2���� �迭 ����
		"Mercury", "Venus", "Earth",
		"Mars", "Jupiter", "Saturn",
		"Uranus", "Neptune", "Pluto"
	};
	int length = sizeof(planets) / sizeof(planets[0]);	//�迭�� ����
	char planet_name[100];	// �Է¹��� �༺ �̸��� ������ �迭
	int number = 0;

	do {
		printf("Planet Name? ==>");
		scanf("%s", &planet_name);	//stdin

		for (int i = 0; i < length; i++) {
			if (!strcmp(*(planets + i), planet_name)) {	// �����ͷ� �迭�� ��ҿ� ���� & strcmp ���� ���� �Ǵ� ���ǿ���
				printf("%d\n", i+1);	// �༺�� �̸��� 1���� ��� (i�� 0���� �����̹Ƿ�)
				break;	// ���� for�� Ż��
			}

			if (!strcmp(planet_name, "exit")) {	//exit�� ��� ���α׷� ����
				return 0;
			}

			if (i == length - 1)	//���� ��� Ž�� ����� �������� �ʴ� ���
				printf("%s is not a planet\n", planet_name);	//�Ʒ� ���ڿ� ���
		}
		
	} while (1);	//���� ���� ����
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* ifp = NULL, * ofp = NULL;
	char name[20];
	int kor, eng, math, programming;
	int total;
	int avg;
	int res;
	int repeat = 0;
	ifp = fopen("prob2_data.txt", "r");
	if (ifp == NULL) {
		printf("�Է� ������ ���� ���߽��ϴ�");
		return 1;
	}

	ofp = fopen("prob2_output.txt", "w");
	if (ofp == NULL) {
		printf("��� ������ ���� ���߽��ϴ�");
		return 1;
	}
	fprintf(ofp, "   �й�    ���\n");
	printf("   �й�    ���\n");

	while (1) {
		res = fscanf(ifp, "%s%d%d%d%d", name, &kor, &eng, &math, &programming);
		
		if (res == EOF) {
			break;
		}
		total = kor + eng + math+ programming;
		avg = total / 4.0;
		
		fprintf(ofp, "%s : %5d\n", name, avg);

		printf("%s : %5d\n", name, avg);
	}
	fclose(ifp);
	fclose(ofp);
	

	return 0;
}
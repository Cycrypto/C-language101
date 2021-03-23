#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

	FILE* fi;
	FILE* oi; // output txt

	long long num;
	int kor, eng, mat, phs, total;

	if ((fi = fopen("prob2_data.txt", "rt")) == NULL) {

		puts(" ������ �����ϴ�.\n");

		return -1;

	}

	printf("     �й�  ���\n");

	while (1)
	{
		int res = fscanf(fi, "%ld %d %d %d &d", &num, &kor, &eng, &mat, &phs);
		if (res == EOF)
			break;

		total = kor + eng + mat + phs;
		printf("%ld : %.1lf\n", num, (float)total / 4);

	}

	fclose(fi);

	return 0;

}
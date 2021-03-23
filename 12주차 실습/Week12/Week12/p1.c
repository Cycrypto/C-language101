#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* origin;
	FILE* copy;	//파일 포인터 선언
	char ch;
	int bytes = 0;
	origin = fopen("C:\\Windows\\system.ini","r");	//대상 파일
	copy = fopen("C:\\temp\\system_ini.txt", "w");	//복사 파일

	while (1) {
		bytes++;
		ch = fgetc(origin);
		if (ch == EOF)	//끝을 만나면 빠져나감
			break;

		fputc(ch, copy);
	}

	fputc('\n', copy);

	fclose(origin);
	fclose(copy);

	printf("읽은 바이트 수는 %d 입니다!", bytes);	//출력 바이트
	return 0;
}
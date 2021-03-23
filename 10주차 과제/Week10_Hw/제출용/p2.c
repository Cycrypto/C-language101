#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char planets[][20] = {	//2차원 배열 생성
		"Mercury", "Venus", "Earth",
		"Mars", "Jupiter", "Saturn",
		"Uranus", "Neptune", "Pluto"
	};
	int length = sizeof(planets) / sizeof(planets[0]);	//배열의 길이
	char planet_name[100];	// 입력받을 행성 이름을 저장할 배열
	int number = 0;

	do {
		printf("Planet Name? ==>");
		scanf("%s", &planet_name);	//stdin

		for (int i = 0; i < length; i++) {
			if (!strcmp(*(planets + i), planet_name)) {	// 포인터로 배열의 요소에 접근 & strcmp 값이 참이 되는 조건에서
				printf("%d\n", i+1);	// 행성의 이름을 1부터 출력 (i는 0부터 시작이므로)
				break;	// 내부 for문 탈출
			}

			if (!strcmp(planet_name, "exit")) {	//exit인 경우 프로그램 종료
				return 0;
			}

			if (i == length - 1)	//만약 모든 탐색 결과에 부합하지 않는 경우
				printf("%s is not a planet\n", planet_name);	//아래 문자열 출력
		}
		
	} while (1);	//무한 루프 생성
}
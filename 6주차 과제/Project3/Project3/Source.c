#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto);  // 배열에 로또 번호를 입력하는 함수
void print_nums(int* lotto);  // 배열에 저장된 값을 출력하는 함수
int main(void){

	int lotto_nums[6];            // 로또 번호를 저장할 배열
	input_nums(lotto_nums);       // 입력함수 호출
	print_nums(lotto_nums);       // 출력함수 호출

	return 0;

}

void input_nums(int* lotto){
	int memoiz[46] = { 0, };	// 입력값이 존재하는지 여부
	int temp = 0;		// 임시 변수 저장 공간
	for (int i = 0; i < 6; i++) {
		printf("번호 입력 :");
		scanf("%d", &temp);
		
		if (!(temp > 0 && temp <= 45)) {	// 1부터 45 이내의 범위만 받을 수 있도록 조건 추가
			printf("맞지 않는 범위입니다!\n");	// 만약 이 조건이 추가되지 않는다면 중복된 값으로 처리해버림.
			i--;
		}

		else if (memoiz[temp] != 0) {	// memoiz는 이전에 값이 입력됐는지 확인하는 용도
			printf("같은 번호가 있습니다!\n");	
			i--;	// i 값을 하나 줄여주면서 해당 번의 시행을 무효화함.
		}

		else {
			lotto[i] = temp;
			memoiz[temp]++;	// 만약 이전에 쓰지 않은 번호라면
		}
	}
}

void print_nums(int* lotto){
	printf("로또 번호 : ");
	for (int i = 0; i < 6; i++) {	// 배열 포인터를 돌아다니면서 번호를 출력함.
		printf("%3d", lotto[i]);
	}
}
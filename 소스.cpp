#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changenum(int* num1, int* num2);

int main(void){
	int a, b;
	int* pnum1 = &a;
	int* pnum2 = &b;

	printf("숫자를 입력해주세요 : ");
	scanf("%d %d", pnum1, pnum2);

	changenum(pnum1, pnum2);

	printf("%d %d", a, b);
	return 0;
}

void changenum(int* num1, int* num2) {
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
};
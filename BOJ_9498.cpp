#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	scanf("%d", &num);

	//&&을 사용해야 함
	if (90 <= num && num <= 100)
		printf("A");
	else if (80 <= num && num <= 89)
		printf("B");
	else if (70 <= num && num <= 79)
		printf("C");
	else if (60 <= num && num <= 69)
		printf("D");
	else
		printf("F");
}
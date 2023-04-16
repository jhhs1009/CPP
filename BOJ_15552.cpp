/*
for문 문제를 풀기 전에 주의히야 할 점이 존재함.

표준 입출력인 cin, cout을 사용하고자 하면 시간초과가 남
*/


#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
    }
}
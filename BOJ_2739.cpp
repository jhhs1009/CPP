#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int N,i,num;
	
	cin >> N;

	for (i = 1; i < 10; i++) {
		// 출력을 여러 개 뽑아야 하는 경우
		cout << N << " * " << i << " = " << N * i << "\n";
	}
	return 0;
}
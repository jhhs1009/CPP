#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int N,i,num;
	
	cin >> N;

	for (i = 1; i < 10; i++) {
		// ����� ���� �� �̾ƾ� �ϴ� ���
		cout << N << " * " << i << " = " << N * i << "\n";
	}
	return 0;
}
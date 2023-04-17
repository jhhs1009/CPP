#include <iostream>

using namespace std;

int main() {
	int N, i,cnt;

	cin >> N;
	
	int *num_list = new int[N];

	for (i = 0; i < N; i++) {
		cin >> num_list[i];
	}

	int v;

	cin >> v;
	cnt = 0;
	for (i = 0; i < N; i++) {
		if (num_list[i] == v) {
			cnt += 1;
		}
	}
	printf("%d", cnt);
}
#include <iostream>

// 표준 입출력 형식을 사용해서 문제 풀이
using namespace std;

int main(int argc, char const *argv[]) {
	
	int h, m, need;
	
	cin >> h >> m >> need;

	int min = 60 * h + m;
	min += need;

	int hour = min / 60;
	int minute = min % 60;

	hour = hour % 24;

	cout << hour << " " << minute;

	return 0;

}
#include <iostream>

// ǥ�� ����� ������ ����ؼ� ���� Ǯ��
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
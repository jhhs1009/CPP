/*
Example1-2

배열 입력 받기 (배열, 문자열)

*/

#include <iostream>

using namespace std;

int main(void)
{
	char arr[10];
	cout << "문자 입력";
	cin >> arr;
	cout << "내용 : " << arr;

	cout << "\n" << "문자열 길이 : " << strlen(arr) << endl;
	cout << "처음 문자는? " << arr[0] << endl;

	return 0;
}
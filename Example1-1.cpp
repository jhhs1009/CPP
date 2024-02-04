/* 
Example1-1

C++ 코딩 기본 - 표준 네임스페이스 및 입출력
*/

#include <iostream> // C언어의 <stdio.h> 

using namespace std; // 표준 네임스페이를 사용하겠다는 의미

int main(void)
{
	int num;
	cout << "숫자 입력 : ";
	cin >> num;
	cout << "내가 입력한 숫자는 : "<<num<< endl;

	return 0;
}

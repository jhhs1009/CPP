/*
등차 수열A의 일반항 a+b*x(x는 음이 아닌 정수)에서 a,b와 
등비 수열 G의 일반항
*/

#include <iostream>
#include <algorithm>
#define LL long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	LL a, b, c, d, u;
	cin >> a >> b >> c >> d >> u;
	LL Acnt = 0;
	if (a <= u) {
		Acnt = (u - a) / b + 1;
	}
	if (d == 1 && c <= u) {
		//d가 1일땐, 값이 움직이지 않는다.
		if (a == c) {
			//중복이니 갯수 추가 X
		}
		else if (a < c && (c - a) % b == 0) {
			//중복이니 갯수 추가 X
		}
		else {
			Acnt++;
		}
	}
	else {
		while (c <= u) {
			Acnt++;
			if (c >= a && (c - a) % b == 0) {
				//수가 같을 땐, 갯수를 차감.
				Acnt--;
			}
			c *= d;
		}
	}
	cout << Acnt << "\n";

	return 0;
}
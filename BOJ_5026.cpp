#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str;

    cin >>n;

    for (int i=0; i<n; i++) {
        cin >> str;

        if (str == "P=NP") {
            cout << "skipped" << '\n';
        }
        else {
            int result = str.find('+');
            // 문자열 자르기 -> .substr 사용
            int a=stoi(str.substr(0,result)); 
            int b=stoi(str.substr(result+1));
            cout << a+b << '\n';
        }
    }

}
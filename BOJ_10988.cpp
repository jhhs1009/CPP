#include <string>
#include <iostream>

using namespace std;

int main() {
    string s;
    int flag = 0;
    
    cin >> s;
    
    int size = s.length();

    for (int i=0; i<=size/2; i++) {
        if (s[i] != s[size-1-i]) {
            flag += 1;
        }
    }

    if (flag == 0) {
        printf("1");
    }

    else {
        printf("0");
    }
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int num, res1, res2;
    int cnt = 0;
    cin >> num;

    00 11
    01 12
    10 21
    11 22
    20
    21
    22


    for (int i = 1; i < 10000000; i++)
    {
    

        for (int j = 1; j < i+2; j++)
        {
            res1 = i;
            res2 = j;
            cnt += 1;

            if (cnt ==num) {
            break;
            }

        }

        if (cnt ==num) {
            break;
        }
        

    }
    

    cout << res1 << "/" <<res2;
}
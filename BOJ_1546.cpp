#include <iostream>

using namespace std;

int main() {
    int N, max;
    cin >> N;

    int *num_list = new int[N];
    max = 0;
    
    double sum = 0;
    for (int i=0; i<N; i++) {
        cin >> num_list[i];
        if (num_list[i]>max) {
            max = num_list[i];
        }
        sum += num_list[i];
        
    }

    sum = (sum/max*100)/N;

    // 자리수 출력를 위한 표현
    cout << fixed;
    cout.precision(6);
    cout << sum;

}
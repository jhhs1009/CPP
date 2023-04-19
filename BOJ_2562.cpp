#include <iostream>

using namespace std;

int main() {
    int N, max, idx;
    N = 9;

    int *num_list = new int[N];

    for (int i=0; i<N; i++) {
        cin >> num_list[i];
    }

    max = 0;
    idx = 0;

    for (int i=0; i<N; i++) {
        if (num_list[i]>max) {
            max = num_list[i];
            idx = i;
        }
    }

    cout << max << "\n" << idx+1;
}
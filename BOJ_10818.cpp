/*
백준 10818 최소, 최대

N개의 정수가 주어진다.
최솟값과 최댓값을 구하는 프로그램을 작성해라
*/
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int *num_list = new int[N];

    for (int i=0; i<N; i++) {
        cin >> num_list[i];
    }

    int max = -1000000;
    int min = 1000000;

    for (int i=0; i<N; i++) {
        if (num_list[i]>max) {
            max=num_list[i];
        }

        if (num_list[i]<min) {
            min=num_list[i];
        }
    }

    cout << min << " " << max;
}
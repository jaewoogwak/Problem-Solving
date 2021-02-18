#include <iostream>
#include <algorithm>
using namespace std;

// baekjoon 2693 : N번째 큰수
// https://www.acmicpc.net/problem/2693

int main(void) {
    int T;
    cin >> T;
    
    int arr[10];
        
    for(int i=0; i<T; i++) {
        for(int j=0; j<10; j++) {
            cin >> arr[j];
        }
        sort(arr, arr+10, greater<int>());
        cout << arr[2] << endl;
    }
}


#include <iostream>
using namespace std;

// baekjoon 2845 : 파티가 끝나고 난 뒤
// https://www.acmicpc.net/problem/2845

int main(void) {
    int L;
    int P;
    
    int N;
    
    int i;
    int arr[5];
    
    cin >> L >> P;
    N = L*P;
    for(i=0; i<5; i++) {
        cin >> arr[i];
    }
    
    for(i=0; i<5; i++) {
        cout << arr[i] - N << " ";
    }
    
}
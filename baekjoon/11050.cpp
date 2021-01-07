#include <iostream>
using namespace std;

// baekjoon 11050 : 이항 계수 1
// https://www.acmicpc.net/problem/11050

int f(int n, int k) {
    if(k==0) return 1;
    else if(k==n) return 1;
    else return f(n-1, k-1) + f(n-1, k);
}

int main(void) {
    int n, k;
    
    cin >> n >> k;
    cout << f(n,k);
} 
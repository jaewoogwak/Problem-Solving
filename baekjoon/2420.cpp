#include <iostream>
#include <cmath>
using namespace std;

// baekjoon 2420 : 사파리월드
// https://www.acmicpc.net/problem/2420

int main(void) {
    long long  a,b;
    
    cin >> a >> b;
    
    long long res = 0;
    
    res = abs(a-b);
    
    cout << res << endl;
}
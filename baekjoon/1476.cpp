#include <iostream>
using namespace std;

// baekjoon 1476 : 날짜 계산
// https://www.acmicpc.net/problem/1476

int main(void) {
    int a=0;
    int b=0;
    int c=0;
    int cnt=0;
    
    int q,w,e;
    cin >> q >> w >> e;
    
    while(1) {
        if(a==q && b==w && c==e) {
            cout << cnt << endl;
            return 0;
        }
        
        if(a==15) {
            a=1;
        } else a++;
        if(b==28) {
            b=1;
        } else b++;
        if(c==19) {
            c=1;
        } else c++;
        cnt++;
    }
}
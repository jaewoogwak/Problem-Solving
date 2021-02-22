#include <iostream>
using namespace std;

// baekjoon 5554 : 심부름 가는 길
// https://www.acmicpc.net/problem/5554

int main(void) {
    int x,y;
    int a;
    int s =0 ;
    for(int i=0; i<4; i++) {
        cin >> a;
        s = s + a;
    }
    
    x = s /60;
    y = (s%60);
    
    cout << x << endl << y << endl;
}
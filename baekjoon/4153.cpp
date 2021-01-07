#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// baekjoon 4153 : 직각삼각형
// https://www.acmicpc.net/problem/4153

int main(void) {
    int a,b,c;
    int tmp;
    int n1, n2, n3;
    
    cin >> a >> b >> c;
    if(a==0 && b ==0 && c==0 ) return 0;
    while (a!=0 && b!=0 && c!=0) {
        tmp = max(a,b);        
        if(tmp > c) {
            if(tmp == a) {
                n3 = a;
                n2 = max(b,c);
                n1 = min(b,c);
            }
            else if(tmp == b) {
                n3 = b;
                n2 = max(a,c);
                n1 = min(a,c);
            }
        }
        else {
            n3 = c;
            n2 = max(a,b);
            n1 = min(a,b);
        }
        
        cout << "n1: " << n1 << " " << "n2: " << n2 << " " << "n3: " << n3 << endl;
        if(pow(n3, 2) == pow(n1, 2) + pow(n2, 2) ) cout << "right" << endl;
        else cout << "wrong" << endl;
        cin >> a >> b >> c;
    }
    return 0;
}
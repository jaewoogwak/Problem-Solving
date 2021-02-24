#include <iostream>
using namespace std;

// baekjoon 2884 : 알람 시계
// https://www.acmicpc.net/problem/2884

int main(void) {
    int H,M;
    int a=0,b=0;
    
    cin >> H >> M;
    
    if(0<H && H<=23) {
        if(0<=M && M<45) {
            a = H -1;
            b = (60 - 45) + M;
        } else if(45<=M && M<=59) {
            a = H;
            b = M - 45;
        }
    } else if(H==0) {
        if(0<=M && M<45) {
            a = 23;
            b = (60 - 45) + M;
        } else if(45<=M && M<=59) {
            a = H;
            b = M - 45;
        }
    }
    cout << a << " " << b << endl;

}
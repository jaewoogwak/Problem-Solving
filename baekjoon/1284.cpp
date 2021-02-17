#include <iostream>
using namespace std;

// baekjoon 1284 : 집주소
// https://www.acmicpc.net/problem/1284

int main(void) {
    int N;
    int num=0;
    int sum=0;
    int cnt=0;

    while(1) {
        cnt =0;
        sum =0;
        cin >> N;
        if(N == 0) return 0;
        else {
            while(1) {
                if(N==0) break;
                num = N%10;
                if(num == 1) sum = sum + 2;
                else if(num == 0) sum = sum + 4;
                else sum = sum + 3;
        
                N = N/10;
                cnt++;
            }
            sum = sum + 2 + cnt - 1;
            cout << sum << endl;
        }   
    } 
}
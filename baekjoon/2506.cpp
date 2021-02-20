#include <iostream>
using namespace std;

// baekjoon 2506 : 점수계산
// https://www.acmicpc.net/problem/2506

int main(void) {
    int N;
    int a;
    int cnt=0;
    
    int score =0;
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> a;
        if(a==1) {
            cnt++;
            score = score + cnt;
        } else cnt =0;
    }
    
    cout << score << endl;
}
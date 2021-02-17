#include <iostream>
using namespace std;

// baekjoon 1145 : 적어도 대부분의 배수
// https://www.acmicpc.net/problem/1145

int main(void) {
    int arr[5];
    for(int i=0; i<5; i++) cin >> arr[i];
    
    int cnt=0;
    int num=1;
    while(1) {
        cnt = 0;
        for(int i=0; i<5; i++) {
            if(num % arr[i] == 0) cnt++;
        }
        
        if(cnt >= 3) {
            cout << num <<endl;
            return 0;
        }
        else num++;
    }
    
}
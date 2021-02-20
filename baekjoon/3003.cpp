#include <iostream>
using namespace std;

//baekjoon 3003 : 킹, 퀸, 룩, 비숍, 나이트, 폰
//https://www.acmicpc.net/problem/3003

const int chese[6] = { 1,1,2,2,2,8};
int main(void) {
    int arr[6];
    
    for(int i=0; i<6; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<6; i++) {
        cout << chese[i] - arr[i] << " ";
    }
}
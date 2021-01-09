#include <iostream>
using namespace std;

// baekjoon 5565 : 영수증
// https://www.acmicpc.net/problem/5565

int main(void) {
    int total=0;
    int i;
    
    int arr[10];
    int sum =0;
    int tmp=0;
    int res=0;
    
    cin >> total;
    
    for(i=0; i<9; i++) {
        cin >> arr[i];    
        sum += arr[i];
    }
    
    /*
    for(i=0; i<9; i++) {
        tmp = sum;
        if(tmp - arr[i] == total) res = arr[i];
    }*/
    
    res = total - sum;
    
    cout << sum << res << endl;
    
}
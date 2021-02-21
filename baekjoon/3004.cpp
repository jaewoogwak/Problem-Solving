#include <iostream>
using namespace std;

// baekjoon 3004 : 체스판 조각
// https://www.acmicpc.net/problem/3004

int main(void) {
    /*
    1번 2조각
    2번 4조각
    3번 6조각
    4번 9조각
    5번 12조각
    6번 16조각
    7번 20조각
    8번 25조각
    9번 30조각
    */ 
    int N;
    
    cin >> N;
    
    int arr[101];
    int cnt=3;
    int j=0;
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 6;

    for(int i=3; i<100; i++, j++) {
        if(i%2!=0 && i!=3) cnt++;
        arr[i] = arr[i-1] + cnt;
    }
    cout << arr[N-1] << endl;
}
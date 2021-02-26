#include <iostream>
using namespace std;

// baekjoon 2953 : 나는 요리사다
// https://www.acmicpc.net/problem/2953

int main(void) {
    
    int arr[5];
    for(int i=0; i<5; i++) {
        int sum=0;
        for(int j=0; j<4; j++) {
            cin >> a;
            sum = sum + a;
        }
        arr[i] = sum;
    }
    int max =0;
    int number=0;
    for(int i=0; i<5; i++) {
        if(max<arr[i]) {
            max = arr[i];
            number = i;
        }     
    }
    cout << number+1 << " "<< max << endl;
    
}
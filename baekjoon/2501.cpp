#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// baekjoon 2501 : 약수 구하기
// https://www.acmicpc.net/problem/2501

int main(void) {
    int N;
    int K;
    
    cin >> N >> K;
    vector <int> arr;
    for(int i=1; i<=N; i++) {
        if(N % i == 0) arr.push_back(i);
    }
    
    if(arr.size() < K) {
        cout << 0 << endl;
        return 0;
    }
    
    cout << arr[K-1] << endl;
    /*
    for(int i=0; i<arr.size(); i++) cout << arr[i] << " ";
    */
    
}


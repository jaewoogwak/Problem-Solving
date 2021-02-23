#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// baekjoon 11728 : 배열 합치기
// https://www.acmicpc.net/problem/11728

int main(void) {
    int N, M;
    
    cin >> N >> M;
    
    int a;
    vector<int> arr;
    
    for(int i=0; i<N; i++) {
        cin >> a;
        arr.push_back(a);
    }
    for(int i=0; i<M; i++) {
        cin >> a;
        arr.push_back(a);
    }
    
    sort(arr.begin() , arr.end());
    
    for(int i=0; i<N+M; i++) cout << arr[i] << " ";
    
}
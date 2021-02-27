#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// baekjoon 11656 : 접미사 배열
// https://www.acmicpc.net/problem/11656

int main(void) {
    string S;
    string tmp;
    cin >> S;
    
    vector<string> arr;
    
    for(int i=0; i<S.length(); i++) {
        tmp = S.substr(i, S.length());
        arr.push_back(tmp);
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<S.length(); i++) {
        cout << arr[i] << endl;
    }  
}
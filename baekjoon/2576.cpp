#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// baekjoon 2576 : 홀수
// https://www.acmicpc.net/problem/2576

int main(void) {
    int cnt=0;
    int sum=0;
    int min=0;

    int n; 
    int i;
    vector<int> arr;
    
    for(i=0; i<7; i++) {
        cin >> n;
        if(n%2!=0) {
            sum += n;
            cnt++;
            arr.push_back(n);
        }
    }
    if(cnt!=0) {
        sort(arr.begin(), arr.end());
        min = arr[0];
    }
    
    if(cnt==0) {
        cout << "-1" << endl;
        return 0;
    }
    else {
        cout << sum << endl << min << endl;
        return 0;
    }
    
}
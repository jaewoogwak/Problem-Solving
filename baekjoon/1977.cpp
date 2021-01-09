#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
// baekjoon 1977 : 제곱수 
// https://www.acmicpc.net/problem/1977

using namespace std;

int main(void) {
    
    int M,N;
    
    cin >> M;
    cin >> N;
    
    int i,j;
    int sum=0;
    int cnt=0;
    int min=0;
    double tmp=0;
    
    vector<int> arr;
    
    for(i=M; i<=N; i++) {
        tmp = sqrt(i);
        if(tmp == (int)sqrt(i)) {
            sum += i;
            arr.push_back(i);
            cnt++;
        }
    }
    
    if(cnt==0){
        cout << -1 << endl;
        return 0;
    } 
    else {
        sort(arr.begin(), arr.end());
        min = arr.front();
        cout << sum << endl << min << endl;
        return 0;
    }

    
  
}
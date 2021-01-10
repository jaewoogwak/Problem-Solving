#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n;
    int tmp;
    int len;
    int cnt=0;
    vector<int> arr;
    
    cin >> n;
    tmp = n;
    while(tmp !=0) {
        tmp = tmp/10;
        cnt++;
    }
    len = cnt;
    //cout << len;
    
    for(int i=0; i<len; i++) {
        arr.push_back(n%10);
        n = n/10;
    }
    //sort(arr.begin(), arr.end(), greater<>());    
    
    for(int i=0; i<len; i++) cout << arr[i];
}
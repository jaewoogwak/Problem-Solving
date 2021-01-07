#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n; // 진짜 약수의 갯수
    int m=0;
    vector <int> arr;
    
    cin >> n;
    arr.resize(n);
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    
    sort(arr.begin(), arr.end());
    
    int a,b;
    a= arr[0];
    b= arr[n-1];
    int res = a*b;
    cout << res;
}
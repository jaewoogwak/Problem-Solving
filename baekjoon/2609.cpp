#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    // gcd(a,b) = gcd(b,a%b)
    if(a%b==0) return b;
    else return gcd(b, a%b);
}

int main(void) {
    // 최대공약수 구하기
    int a(0);
    int b(0);
    int i(1);
    int j(1);
    
    vector <int> arr1;
    vector <int> arr2;
    
    cin >> a >> b;

    
    // gcd
    int max = gcd(a,b);
    
    // lcm
    int min = (a*b) / max;
    
    cout << max << endl << min;
    return 0;
}
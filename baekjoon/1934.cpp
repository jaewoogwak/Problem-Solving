#include <iostream>
using namespace std;


int gcd (int a, int b) {
    if(a%b==0) return b;
    else return gcd(b, a%b);
}

int lcm (int a, int b, int n) {
    int res = (a*b) /  n;
    return res;
}

int main(void) {
    int T;
    int a,b;
    
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> a >> b;
        int n;
        n = gcd(a,b);
        cout << lcm(a,b, n) << endl;
    }
}
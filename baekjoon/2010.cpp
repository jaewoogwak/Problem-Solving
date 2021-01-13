#include <iostream>
using namespace std;

int main(void) {
    int N;
    int plug;
    int sum=0;
    cin >> N;
    
    cin >> plug;
    sum = sum + plug;
    for(int i=1; i<N; i++) {
        cin >> plug;
        sum = sum -1;
        sum = sum + plug;
    }
    
    cout << sum << endl;
}
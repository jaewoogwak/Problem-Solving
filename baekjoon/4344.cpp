#include <iostream>
#include <vector>
using namespace std;

// baekjoon 4344 : 평균은 넘겠지
// https://www.acmicpc.net/problem/4344

int main(void) {
    int C;
    int N;
    
    cin >> C;
    
    for(int i=0; i<C; i++) {
        cin >> N;
        vector<int> arr;
        int sum=0;
        int avg=0;
        int over=0;
        for(int j=0; j<N; j++) {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        for(int j=0; j<N; j++) {
            sum = sum + arr[j];
        }
        avg = sum / N;
        for(int j=0; j<N; j++) {
            if(arr[j]>avg) over++;
        }
        double res = (over/(double)N) * 100;
        cout << fixed;
        cout.precision(3);
        cout << res << "%" << endl;
        cout.unsetf(ios::fixed);
        
    }
}
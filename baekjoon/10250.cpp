#include <iostream>
#include <vector>
using namespace std;

// baekjoon 10250 : ACM 호텔
// https://www.acmicpc.net/problem/10250

int main(void) {
   ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int H,W,N;
    
    int T;
    int room=0;
    cin >> T;
    
    for(int i=0; i<T; i++) {
        cin >> H >> W >> N;
        
        vector<int> arr;
        
        for(int k=0; k<W; k++) {
            for(int j=0; j<H; j++) {
                room = (j+1) * 100 + (k+1);
                arr.push_back(room);
            }    
        }
        cout << arr[N-1]<< endl; 
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N;
    int M;
    int a;
    cin >> N >> M;
    
    vector<int> arr1[N];
    vector<int> arr2[N];
    vector<int> res[N];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> a;
            arr1[i].push_back(a);
        }
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> a;
            arr2[i].push_back(a);
        }
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            res[i].push_back(arr1[i][j] + arr2[i][j]);
        }
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
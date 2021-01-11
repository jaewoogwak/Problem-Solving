/*
1층 3호 -> 0층 1~3호 사람 다 합쳐서 데려와야됨

0층| 1명 2명  3명  4명
1층| 1명 3명  6명 10명
2층| 1명 4명 10명 20명
3층| 1명 5명 15명 35명

*/

#include <iostream>
#include <vector>

using namespace std;


int arr[15][15];

int sum(int a,int b) {
    int res=0;
    int i;
    for(i=0; i<b+1; i++) {
        res = res + arr[a][i];
    }
    return res;
}

int main(void) {
    int i,j;
    
    for(i=0; i<15; i++) {
        arr[0][i] = i+1;
    }
     
    for(i=1; i<15; i++) {
        for(j=0; j<15; j++) {
            arr[i][j] = sum(i-1, j);
        }
    }
    
    int k,n, T;
    cin >> T;
    for(i=0; i<T; i++) {
        cin >> k;
        cin >> n;
        cout << arr[k][n-1] << endl;    
        
    }  
    /*for(i=0; i<15; i++) {
        for(j=0; j<15; j++) {
            printf("%6d ", arr[i][j]);
        }
        cout << endl;
    }*/
}
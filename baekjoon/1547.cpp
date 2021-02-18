#include <iostream>
using namespace std;

int main(void) {
    int M;
    int X,Y;
    
    cin >> M;
    
    int now = 1;
    
    for(int i=0; i<M; i++) {
        cin >> X >> Y;
        
        if(X == now || Y == now) {
            if(X == now) {
                now = Y;
            } else now = X;
        }
    }
    cout << now << endl;
}
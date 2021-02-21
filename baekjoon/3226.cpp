#include <iostream>
#include <string>
using namespace std;

// baekjoon 3226 : 전화 요금
// https://www.acmicpc.net/problem/3226

int main(void) {
    int N;
    
    cin >> N;
    
    int HH;
    int MM;
    int DD;
    string str;
    
    int res=0;
    
    for(int i=0; i<N; i++) {
        cin >> str >> DD;
        HH = stoi(str);
        str = str.substr(3,4);
        MM = stoi(str);
        
        if(HH >= 7 && HH <19) {
            if(HH == 18) {
                if(MM + DD > 60) {
                    res = res + 10 * (60 - MM) + 5 * (DD - (60-MM));
                }
                else res = res + 10 * DD;
            }
            else res = res + 10 * DD;
        } else if ( (HH>=19 && HH<=23) || (00 <= HH && HH <= 06) ) {
            if(HH == 06) {
                if(MM + DD > 60) {
                    res = res + 5 * (60-MM) + 10 * (DD - (60-MM));
                }
                else res = res + 5 * DD;
            }
            else res = res + 5 * DD;
        }
    }
    cout << res << endl;
}
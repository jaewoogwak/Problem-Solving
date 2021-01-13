#include <iostream>
using namespace std;

// baekjoon 5086 :배수와 약수
// https://www.acmicpc.net/problem/5086

int main(void) {
    int a=-1,b=-1;
  
    while(a !=0 && b!=0){
        cin >> a >> b;
        if(a == 0 && b == 0) return 0;
        
        if(b % a == 0) {
            // a가 b의 약수이면
            cout << "factor" << endl;
        }
        else if(a % b == 0) {
            // b가 a의 약수라면 -> a가 b의 배수라면
            cout << "multiple" << endl;
        }
        else cout << "neither" << endl;
    }
       
}
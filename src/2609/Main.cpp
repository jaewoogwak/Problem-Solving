#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // 최대공약수 구하기
    int a(0);
    int b(0);
    int i(1);
    int j(1);
    
    vector <int> arr1;
    vector <int> arr2;
    
    cin >> a >> b;

    
    
    
    // a 약수 구하기
    for(i=1; i<=a; i++) {
        if(a%i == 0) {
            arr1.push_back(i);
        }
    }
    // b 약수 구하기
    for(i=1; i<=b; i++) {
        if(b%i == 0) {
            arr2.push_back(i);
        }
    }
    /*
    for(i=0; i<arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(i=0; i<arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    */
    
    // *** 최대공약수 구하기 ***
    int max=0;
    int tmp=0;
    
    for(i=0; i<arr1.size(); i++) {
        tmp = arr1[i];
        for(j=0; j<arr2.size(); j++) {
            if(tmp == arr2[j]) {
                max = arr2[j];
                break;
            }
        }
    } 
    
    // ***        ***
    
    // *** 최소공배수 구하기 ***    
    int min =0;
    
    for(i=1; i<=a; i++) {
        for(j=1; j<=b; j++) {
            if(a*i == b*j) {
                min = a*i;
                cout << max << endl;
                cout << min << endl;
                return 0;
            }
        }
    }    
    
 
}
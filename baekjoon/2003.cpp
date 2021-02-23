#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// baekjoon 2003 : 수들의 합 2
// https://www.acmicpc.net/problem/2003

int board[10001];

int main(void) {
    int N, M;
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++) {
        cin >> board[i];
    }
    
    int start=0;
    int end=0;
    int partial_sum =0;
    int answer =0;
    // 부분합 < 구하는 합 : end++
    // 부분합 >= 구하는 합 : start++
    while (end <= N) {
        if(partial_sum < M) {
            partial_sum = partial_sum + board[end++];
            cout << end << endl;
            cout << "부분 배열의 합: " << partial_sum << endl;
        } else if(partial_sum >= M) {
            partial_sum = partial_sum - board[start++];
            cout << "부분 배열의 합: " << partial_sum << endl;
        } if (partial_sum == M) answer++;
    }
    
    cout << answer << endl;
    
}
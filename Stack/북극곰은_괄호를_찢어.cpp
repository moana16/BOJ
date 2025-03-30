#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; 
    cin >> N;
    string S; 
    cin >> S;
    
    int depth = 0; 
    int max_depth = 0; 
    
    for (char c : S) {
        if (c == '(') {
            depth++;
        } else {
            depth--;
        }
        
        max_depth = max(max_depth, abs(depth));
    }

    if (depth != 0) { // 괄호쌍이 맞지 않는 경우
        cout << -1;
    } else {
        cout << max_depth;
    }
    
    return 0;
}
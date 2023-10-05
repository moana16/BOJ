#include <bits/stdc++.h>
using namespace std;

int main() {
    while(true) {
        stack<int> s;
        int n; cin>>n;
        if(n==0) break;
        while(n--) {
            int x; cin>>x;
            
            while(s.top() <= x && !s.empty()) {
                s.pop();
            }
            s.push(x);
        }
        
        

    }
}
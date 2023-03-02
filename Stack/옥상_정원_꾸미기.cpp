#include <bits/stdc++.h>
using namespace std;

//스택에 들어온 건물중 벤치마킹 할 수 있는 건물의 수를 더하는 것으로 풀음..

int main() {
    int n; cin>>n;
    int cnt = 0;
    stack<long long> s;
    for(int i=1; i<=n; i++) {
        long long h; cin>>h;
        while(!s.empty() && s.top() <= h ) {
            s.pop();
        }
        s.push(h);
        cnt += s.size() -1;

    }
    cout<<cnt;
}
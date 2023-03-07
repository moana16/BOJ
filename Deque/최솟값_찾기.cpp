#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N, L; cin>>N>>L;
    deque<pair<int,int>> dq;
    deque<int> ans;
    for(int i=0; i<N; i++) {
        int x; cin>>x;

        while(!dq.empty() && dq.back().second >= x) {
            dq.pop_back();
        }
        dq.push_back({i,x});
        if(dq.front().first <= i-L ) {
            dq.pop_front();
        }
        cout<<dq.front().second<<" ";
    }



}
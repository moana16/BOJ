#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    deque<pair<int,int>> dq;
    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        dq.push_back({i,x});
    }

    int move = dq.front().second;
    dq.pop_front();
    cout<<1<<" ";

    while(!dq.empty()) {
        int idx, value;
        if(move >= 1) {
            for(int i=1; i<=move; i++) {
                idx = dq.front().first;
                value = dq.front().second;
                dq.pop_front();
                if(i != move) dq.push_back({idx,value});
            }
        }
        else {
            for(int i=-1; i>=move; i--) {
                idx = dq.back().first;
                value = dq.back().second;
                dq.pop_back();
                if(i != move) dq.push_front({idx,value});
                
            }

        }
        cout<<idx<<" ";
        move = value;
    }
}
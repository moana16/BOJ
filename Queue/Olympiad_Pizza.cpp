#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    queue<pair<int,int>> q;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        q.push({i,x});
    }
    int count = 1;
    vector<int> v(N, 0);
    while(!q.empty()) {
        int idx = q.front().first;
        int cur = q.front().second;

        q.pop();

        if(cur > 1) q.push({idx, cur-1});
        else v[idx] = count;
        count++;
    }

    for(auto c : v) cout<<c<<" ";
}
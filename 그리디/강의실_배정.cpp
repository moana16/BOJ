#include <bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,int>> v;
priority_queue<int, vector<int>,greater<>> times;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) {
        int x,y ; cin>>x>>y;
        v.push_back({x,y});
    }

    times.push(0);
    sort(v.begin(), v.end());


    for(int i=0; i<N; i++) {
        int c = times.top();
        int s = v[i].first;
        int e = v[i].second;
        times.pop();
        if( s < c) times.push(c);
        times.push(e);
        
    }
    cout<<times.size()<<'\n';

}
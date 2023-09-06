#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<pair<int,int>> fibo;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    while (T--) 
    {
        int x; cin>>x;
        v.push_back(x);
    }
    fibo.push_back({1,0});
    fibo.push_back({0,1});
    for(int i=2; i<= 40; i++) {
        int nx = fibo[i-1].first + fibo[i-2].first;
        int ny = fibo[i-1].second + fibo[i-2].second;
        fibo.push_back({nx,ny});
    }
    for(int i=0; i<v.size(); i++) {
        cout<<fibo[v[i]].first<<" "<<fibo[v[i]].second<<'\n';
    }

    
}


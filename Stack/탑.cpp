#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin>>n;
    stack<pair<int,int>> s;
    s.push({100000001,0});
    for(int i=1; i<=n; i++) {
        int height; cin>>height;
        while(s.top().first < height)
            s.pop();
        cout<<s.top().second<<" ";
        s.push({height,i});
    }
}
#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int,int>> v;
int ans = 0;
int main() {
    cin>>n;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    int start = v[0].first;
    int end = v[0].second;

    for(int i=1; i<n; i++) {
        int s = v[i].first;
        int e = v[i].second;
        if(end >= s) {
            if(end < e) end = e;
        }
        else {
            ans += end-start;
            start = s, end = e;
        }
    }
    ans += end-start;
    cout<<ans;
    
    

}
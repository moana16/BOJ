#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int MAX = 0;

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int x,y; cin>>x>>y;
        v.push_back({y,x}); //끝난 시간이 작을 수록 이어지는 회의의 개수가 많아질테니까..!
    }

    sort(v.begin(),v.end());
    int ans = 0;
    int endTime = 0;
    for(int i=0; i<n; i++) {
        if(v[i].second >= endTime) {
            ans++;
            endTime = v[i].first;
        }
    }
    cout<<ans;

    
}
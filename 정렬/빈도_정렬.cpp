#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
vector<int> v;
vector<pair<int,int>> ans;

bool cmp(const pair<int,int>& a,const pair<int,int>& b){
    return a.second > b.second;
    
}

int main() {
    int n, c;
    cin>>n>>c;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        mp[x]++;
        if(v.end()==(find(v.begin(), v.end(), x))) v.push_back(x);
    }
    for(int c : v) {
        ans.push_back({c, mp[c]});

    }
    stable_sort(ans.begin(), ans.end(), cmp);
    for (auto& p : ans) {
        for (int i = 0; i < p.second; i++) {
            cout << p.first << " ";
        }
}

}
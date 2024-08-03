#include<bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,int>> coordinates; // 원의 시작, 종료 좌표

bool comp(const pair<int,int>& a, const pair<int,int> &b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        int x, r; cin>>x>>r;
        coordinates.push_back({x-r, i});
        coordinates.push_back({x+r, i});
    }
    sort(coordinates.begin(), coordinates.end(),comp);

    stack<pair<int,int>> st;

    for(int i=0; i<coordinates.size(); i++) {
        if(!st.empty() && st.top().second == coordinates[i].second) st.pop();
        else st.push({coordinates[i].first, coordinates[i].second});
    }

    if(st.empty()) cout<<"YES";
    else cout<<"NO"; 

}
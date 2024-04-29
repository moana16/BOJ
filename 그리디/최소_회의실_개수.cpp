#include<bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,int>> v;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        int s,e; cin>>s>>e;
        v.push_back({s,e});
    }
    sort(v.begin(), v.end());

    for(auto c : v) {
        if(pq.empty()) pq.push({c.second, c.first});
        else {
            int en = pq.top().first;
            if(en <= c.first) pq.pop();
            pq.push({c.second, c.first});
        }

    } 
    cout<<pq.size();
}
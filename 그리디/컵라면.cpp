#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<pair<int,int>> v;
    for(int i=0; i<N; i++) {
        int d, c; cin>>d>>c;
        v.push_back({d,c});
    }

    sort(v.begin(), v.end());

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<N; i++) {
        pq.push(v[i].second);

        if(pq.size() > v[i].first) {
            pq.pop();
        }
        
    }
    int sum = 0;
    while(!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    cout<<sum;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<pair<int,int>> v(N);

    for(int i=0; i<N; i++) {
        int x; cin>>x>>v[i].first>>v[i].second;
    }

    sort(v.begin(), v.end());
    priority_queue<int, vector<int>, greater<>> q;

    for(auto c : v) {
        if(q.empty()) q.push(c.second);
        else {
            if(q.top() <= c.first) q.pop();
            q.push(c.second);
        }
    }

    cout<<q.size();

}


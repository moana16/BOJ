#include<bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
vector<pair<int,int>> v;

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int p, d;
        cin>>p>>d;
        v.push_back({d,p});
    }

    sort(v.begin(), v.end());
    

    for(int i=0; i<n; i++) {
        q.push(v[i].second);
        if(q.size() > v[i].first) q.pop();
    }

    int sum = 0;
    while(!q.empty()) {
        sum += q.top();
        q.pop();
    }

    cout<<sum;
    
}
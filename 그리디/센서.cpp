#include<bits/stdc++.h>
using namespace std;

int N,K;
set<int> s;
vector<int> df;
int ans = 0;

int main() {
    cin>>N>>K;
    int x;
    for(int i=0; i<N; i++) {
        cin>>x;
        s.insert(x);
    }

    vector<int> v(s.begin(), s.end());

    for(int i=1; i<s.size(); i++) {
        df.push_back(v[i]-v[i-1]);

    }
    
    sort(df.begin(), df.end(), greater<>());

    for(int i=K-1; i<df.size(); i++) {
        ans += df[i];
    }

    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int N; cin>>N;
    vector<pair<int,int>> v(N+1);
    ll total = 0;
    for(int i=1; i<=N; i++) {
        int x,a; cin>>x>>a;
        v[i] = {x,a};
        total += a;
    }
    sort(v.begin()+1, v.end());

    ll population = 0;

    for(int i=1; i<=N; i++) {
        population += v[i].second;
        if(population >= (total + 1) / 2) {
            cout<<v[i].first;
            break;

        }
    }
    


}
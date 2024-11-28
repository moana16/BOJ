#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    vector<pair<int,int>> p(N);
    set<int> maxCosts;
    for(int i=0; i<N; i++) {
        cin>>p[i].first>>p[i].second;
        maxCosts.insert(p[i].first);
    }

    int profit = 0, cost=0;

    int sum;
    for(auto mc : maxCosts) {
        sum = 0;
        for(int i=0; i<N; i++) {
            if(mc <= p[i].first) {
                if(mc - p[i].second > 0) {
                    sum += mc;
                    sum -= p[i].second;

                }
            }
        }

        if(sum > profit) {
            cost = mc;
            profit = sum;
        } 
    }
    cout<<cost;

    
    
}
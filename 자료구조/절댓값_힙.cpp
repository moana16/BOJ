#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,x; cin>>N;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    for(int i=0; i<N; i++) {
        cin>>x;
        if(x == 0) {
            if(pq.empty()) cout<<0<<'\n';
            else {
                cout<<pq.top().second<<'\n';
                pq.pop();

            } 
        }
        else pq.push({abs(x), x});

    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        vector<pair<int,int>> v(N);
        for(int i=0; i<N; i++) cin>>v[i].first>>v[i].second;
        sort(v.begin(), v.end());

        int tmp = v[0].second;
        int cnt = 1;

        for(auto c : v) {
            if(c.second < tmp) {
                cnt++;
                tmp = c.second;
            } 
        }
        cout<<cnt<<"\n";
    }
}

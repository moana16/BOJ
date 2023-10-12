#include <bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,int>> v;
int stM, stD, enM, enD;
int ans = 0;

//3월 1일부터 11월 30일까지 매일 꽃이 한 가지 이상 피어 있도록 
int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>stM>>stD>>enM>>enD;
        v.push_back({stM * 100 + stD,enM * 100 + enD});
    }
    int t = 301;
    while(t < 1201) {
        int nxt = t;
        for(int i = 0; i <N; i++) {
            if(v[i].first <= t && v[i].second > nxt) nxt = v[i].second;
        }
        if(nxt == t) {
            cout<<0;
            return 0;
        }
        ans++;
        t = nxt;
    }
    cout<<ans;

}
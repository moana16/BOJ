#include<bits/stdc++.h>
using namespace std;

int lastEndTime = 0;

int main() {
    int n; cin>>n;
    vector<pair<int,int>> v;
    while(n--) {
        int st, time;
        cin>>st>>time;
        v.push_back({st, time});

    }
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) {
        if(v[i].first > lastEndTime) {
            lastEndTime = v[i].first;
        }
        lastEndTime += v[i].second;

    }

    cout<<lastEndTime;
}
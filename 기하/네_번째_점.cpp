#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> sx;
    map<int,int> sy;
    for(int i=0; i<3; i++) {
        int x,y;
        cin>>x>>y;
        sx[x]++;
        sy[y]++;
    }
    for(auto &i : sx) {
        if(i.second == 1) cout<<i.first<<" ";
    }
    for(auto &i : sy) {
        if(i.second == 1) cout<<i.first;
    }
}
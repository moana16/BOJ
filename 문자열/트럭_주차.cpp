#include<bits/stdc++.h>
using namespace std;

int MX = 0;
int MN = 0x7f7f7f;

int num[100];

int ans=0;

int main() {
    int a,b,c; cin>>a>>b>>c;
    vector<pair<int,int>> v;
    for(int i=0; i<3; i++) {
        int s, e; cin>>s>>e;
        for(int j=s; j<e; j++) num[j]++;
        MN = min(MN,s);
        MX = max(MX,e);
    }

    for(int i=MN; i<=MX; i++) {
        if(num[i] == 1) ans += num[i]*a;
        else if(num[i] == 2) ans += num[i]*b;
        else if(num[i] == 3) ans += num[i]*c;
    }
    cout<<ans;
}

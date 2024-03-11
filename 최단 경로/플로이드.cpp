#include<bits/stdc++.h>
using namespace std;

int n,m;
int d[103][103];

int main() {
    cin>>n;
    cin>>m;
    
    for(int i=0; i<=n; i++) fill(d[i], d[i]+n+1, 0x3f3f3f3f);

    while(m--) {
        int a,b,c;
        cin>>a>>b>>c;
        d[a][b] = min(c, d[a][b]);
    }
    for(int i=1; i<=n; i++) d[i][i] = 0;

    for(int k=1; k<=n; k++) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }      
    }    

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(d[i][j] == 0x3f3f3f3f) cout<<"0 ";
            else cout<<d[i][j]<<" ";

        }
        cout<<'\n';
    }




}
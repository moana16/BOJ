#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        string a,b; cin>>a>>b;
        
        int one = 0, zero = 0;
        for(int i=0; i<a.length(); i++) {
            if(a[i] != b[i]){
                if(b[i] == '0') zero++;
                else one++;
            }
        }

        if(one == zero) cout<<one<<'\n';
        else {
            cout<<max(one, zero)<<'\n';
        }
    }
}
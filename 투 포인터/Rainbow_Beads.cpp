#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    string str; cin>>str;

    int s=0, ans = 1;
    for(int e=1; e<N; e++) {
        if(str[e] == str[e-1]) {
            s = e;
            
        }
        ans = max(ans, e-s+1 );
    }

    cout<<ans;


}
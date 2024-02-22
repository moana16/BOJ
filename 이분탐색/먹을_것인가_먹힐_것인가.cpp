#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;
    while(T--) {
        int a,b;
        cin>>a>>b;
        vector<int> A,B;
        for(int i=0; i<a; i++) {
            int x; cin>>x;
            A.push_back(x);
        }

        for(int i=0; i<b; i++) {
            int x; cin>>x;
            B.push_back(x);
        }

        sort(B.begin(), B.end());

        int ans = 0;

        for(auto c : A) {
            int cnt = 0;
            while(cnt != b) {
                if(c > B[cnt]) {
                    ans++;
                    cnt++;
                }else break;
            } 
        }
        cout<<ans<<'\n';
    }
}
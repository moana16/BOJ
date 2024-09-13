#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;

    while (T--)
    {
        int J,N; cin>>J>>N;
        vector<int> v(N);
        for(int i=0; i<N; i++) {
            int x,y; cin>>x>>y;
            v[i] = x*y;
        }
        sort(v.begin(), v.end(), greater<>());
        int cnt = 0;
        for(auto c : v) {
            if(J <= 0) break;
            J -= c;
            cnt++;
        }

        cout<<cnt<<'\n';
    }
    
}

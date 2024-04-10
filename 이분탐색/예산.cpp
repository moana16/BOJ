#include<bits/stdc++.h>
using namespace std;

long long N,M, ans = 0;
vector<long long> v;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    cin>>M;

    int total = accumulate(v.begin(), v.end(), 0);
    if(total <= M) cout<<*max_element(v.begin(), v.end());
    else {
        long long l = 0;
        long long r = M;

        while(l <= r) {
            long long mid = (l+r)/2;
            long long total = 0;

            for(int i=0; i<N; i++) {
                if(v[i] <= mid) total += v[i];
                else total += mid;
            }

            if(total > M) r = mid-1;
            else {
                ans = max(ans, mid);
                l = mid+1;
            }
            
        }

        cout<<ans;

    }

    
}
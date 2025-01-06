#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M;
    cin>>N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin>>A[i];

    sort(A.begin(), A.end());

    cin>>M;
    
    while(M--) {
        int x; cin>>x;
        int s=0, e=N-1;

        bool flag = false;

        while(s <= e) {
            int mid = s + (e - s)/2;
            if(A[mid] <= x) {
                if(A[mid] == x ) {
                    flag = true;
                    break;

                }
                s = mid+1;
            }
            else e = mid-1;
        }

        if(flag) cout<<1<<'\n';
        else cout<<0<<'\n';

    }
}
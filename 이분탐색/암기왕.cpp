#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;
    while(t--) {
        int N,M; 
        vector<int> v1, v2;

        cin>>N;
        for(int i=0; i<N; i++) {
            int x; cin>>x;
            v1.push_back(x);
        }
        
        cin>>M;
        for(int i=0; i<M; i++) {
            int x; cin>>x;
            v2.push_back(x);
        }

        sort(v1.begin(), v1.end());

        for(auto num : v2) {
            int s = 0;
            int e = N-1;
            bool flag = false;

            while(s <= e) {
                int mid = ( s + e ) /2;

                if(v1[mid] == num) {
                    cout<<1<<'\n';
                    flag = true;
                    break;
                }

                if(v1[mid] > num) {
                    e = mid-1;
                }
                else s = mid + 1;
            }
            if(!flag) cout<<0<<'\n';
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
int T;
int main() {
    cin>>T;
    while(T--) {
        int ans = 0;
        vector<int> arrA;
        vector<int> arrB;
        int A, B; cin>>A>>B;
        for(int i=0; i<A; i++) {
            int x; cin>>x;
            arrA.push_back(x);
        }
        for(int i=0; i<B; i++) {
            int x; cin>>x;
            arrB.push_back(x);
        }

        sort(arrA.begin(), arrA.end());
        sort(arrB.begin(), arrB.end());

        for(int i=0; i<A; i++) {
            int cnt = 0;
            while(cnt != B) {
                if(arrA[i] > arrB[cnt]) {
                    ans++;
                    cnt++;
                }else break;

            }
            
            
        }
        cout<<ans<<'\n';

    }

}
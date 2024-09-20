#include<bits/stdc++.h>
using namespace std;

bool check(const vector<int> & v) {
    for(auto c : v) if(c != 0) return false;
    return true;
}

int main() {
    int N, cnt = 0; cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    while(true) {
        
        for(int i=0; i<N; i++) {
            if(v[i] == 0) continue;
            int tmp = v[i];
            if(tmp % 2 == 1) {
                v[i] -= 1;
                cnt++;
            }
            v[i] /= 2;
        }

        if(check(v)) break;
        cnt++;
    }

    cout<<cnt;


}
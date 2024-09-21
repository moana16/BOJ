#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,L; cin>>N>>L;
    vector<int> v(N);

    for(int i=0; i<N; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int cnt = 1;
    int end = v[0];
    for(int i=1; i<N; i++) {
        int tmp = v[i] - end;
        if(tmp + 1 > L) {
            cnt++;
            end = v[i];
        } 
    }
    cout<<cnt<<'\n';
}
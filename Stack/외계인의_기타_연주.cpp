#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N, P; cin>>N>>P;
    vector<stack<int>> v(7);
    int cnt = 0;

    for(int i=0; i<N; i++) {
        int stringNum, fretNum;
        cin>>stringNum>>fretNum;

        while(!v[stringNum].empty() && v[stringNum].top() > fretNum) {
            v[stringNum].pop();
            cnt++;
        }
        
        if(!v[stringNum].empty() && v[stringNum].top() == fretNum) continue;
        v[stringNum].push(fretNum);
        cnt++;

    }

    cout<<cnt;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5);
    for(int i=0; i<5; i++) cin>>v[i];

    int cnt;
    for(int i=1; i<=1000000; i++) {
        cnt = 0;
        for(int j=0; j<5; j++) {
            if(i % v[j] == 0) cnt++;
        }
        if(cnt >= 3) {
            cout<<i;
            return 0;
        }
    }
}
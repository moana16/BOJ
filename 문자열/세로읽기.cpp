#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v(5);
    for(int i=0; i<5; i++) cin>>v[i];

    int idx = 0;
    string ans;
    while(idx < 15) {
        for(int i=0; i<5; i++) {
            if(v[i].length()-1 >= idx) ans += v[i][idx];
        }
        idx++;

    }
    
    cout<<ans;
}
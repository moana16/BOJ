#include<bits/stdc++.h>
using namespace std;

int main() {
    string S,K; cin>>S>>K;

    string str;
    for(auto c : S) {
        if(isalpha(c)) str += c;
    }

    if(str.find(K) != string::npos) cout<<1;
    else cout<<0;
}
#include<bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin>>N;
    map<string,int> participant;
    for(int i=0; i<N; i++) {
        string name; cin>>name;
        participant[name]++;
    }
    for(int i=0; i<N-1; i++) {
        string str; cin>>str;
        participant[str]--;
    }

    for(auto p : participant) {
        if(p.second > 0) cout<<p.first;
    }
}
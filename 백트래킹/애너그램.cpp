#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<string> s(N);
    for(int i=0; i<N; i++) {
        string str; cin>>str;
        sort(str.begin(), str.end());
        do {
            cout<<str<<'\n';
        }
        while(next_permutation(str.begin(), str.end()));
    }
}
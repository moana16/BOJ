#include<bits/stdc++.h>
using namespace std;

int N,M;
vector<string> v;
int MN = 0x7f7f7f;
int ans = 0;
string dna;

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string s; cin>>s;
        v.push_back(s);
    } 
    int idx = 0;
    while(idx < M) {
        int alph[26] = {0,};
        int max_idx = 0;
        int mx = 0;
        for(int i=0; i<N; i++) {
            alph[v[i][idx]-'A']++;
        }
        for(int i=0; i<26; i++) {
            if(mx < alph[i]) mx = alph[i], max_idx=i;
        }
        ans += N - mx;
        dna += max_idx + 'A';
        idx++;


    }
    cout<<dna<<'\n'<<ans;
    

}
#include<bits/stdc++.h>
using namespace std;

int N,M, total = 0;
string ans;
vector<string> s;
map<char,int> m;
char dna[4] = {'A', 'C', 'G', 'T'};


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string x; cin>>x;
        s.push_back(x);
    }
    int idx = 0;
    while(true) {
        int freq = 0;
        char tmp;

        if(idx == M) break;

        for(int i=0; i<N; i++) {
            m[s[i][idx]]++;
        }

        for(int i=4; i>=0; i--) {
            if(freq <= m[dna[i]]) {
                freq = m[dna[i]];
                tmp = dna[i];
            }
        }

        ans += tmp;
        total += N - m[tmp];
        idx++;
        for(int i=0; i<4; i++) {
            m[dna[i]] = 0;
        }


    }
    cout<<ans<<'\n'<<total;
    
}
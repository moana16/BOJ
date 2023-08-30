#include <bits/stdc++.h>
using namespace std;

long long N;
vector<string> str;
vector<long long> res;

int main() {
    cin>>N;
    for(long long i=0; i<N; i++) {
        string s; cin>>s;
        str.push_back(s);

        long long sz = str[i].length()-1;
        if(str[i][sz] == '0') { //0을 먼저 처리
            while(str[i][sz] == '0') sz--;
        }
        
        string tmp;
        for(long long j=sz; j >= 0; j--) {
            tmp.push_back(str[i][j]);
        }
        res.push_back(stoll(tmp));
    }
    sort(res.begin(), res.end());

    for(long long t=0; t<N; t++) { 
        cout<<res[t]<<'\n';
    }

}
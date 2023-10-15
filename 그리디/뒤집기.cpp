#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[2] = {0,0};

int main() {
    cin >> s;
    cnt[s[0]-'0']++;
    for(int i = 1; i<s.length(); i++) {
        if(s[i] != s[i-1]) cnt[s[i]-'0']++;
    }
    cout<<min(cnt[0],cnt[1]);

}

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    int cnt[2] = {0,0};
    cnt[str[0]-'0']++;
    for(int i=1; i<str.size(); i++) {
        if(str[i] != str[i-1]) cnt[str[i] - '0']++;
    }
    cout<<min(cnt[0], cnt[1]);
}
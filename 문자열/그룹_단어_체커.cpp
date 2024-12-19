#include<bits/stdc++.h>
using namespace std;
int alpha[26];
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    int ans = 0;
    while(N--) {
        bool isGroupWorld = true;
        memset(alpha, 0, sizeof(alpha));
        string word; cin>>word;
        for(int i=0; i<word.length(); i++) {
            if(alpha[word[i]-'a'] > 0) {
                if(word[i-1] != word[i]) {
                    isGroupWorld = false;
                    break;
                }
            }
            else alpha[word[i]-'a']++;
        }
        if(isGroupWorld) ans++;

    }
    cout<<ans;
}
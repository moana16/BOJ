#include<bits/stdc++.h>
using namespace std;

int alpha[26];

int main() {
    string str; cin>>str;
    for(auto c : str) alpha[c-'A']++;

    int oddCnt = 0;
    char oddChar;

    for(int i=0; i<26; i++) {
        if(alpha[i] % 2 == 1) {
            oddCnt++;
            oddChar = i + 'A';
        }
    }
    if(oddCnt > 1) {
        cout<<"I'm Sorry Hansoo";
    }
    else {
        string st, en;

        for(int i=0; i<26; i++) {
            string tmp(alpha[i] / 2,'A'+i);
            st += tmp;
            en = tmp + en;
        }

        if(oddCnt == 1) {
            st += oddChar;
        }
        cout<<st+en;
    }
    

}
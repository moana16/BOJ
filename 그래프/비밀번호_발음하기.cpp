#include<bits/stdc++.h>
using namespace std;
vector<char> vowel = {'a','e','i','o','u'};
vector<char> consonant = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','u','v'};

bool first(string s) {
    for(auto c : s) {
        if(find(vowel.begin(),vowel.end(),c) != vowel.end()) return true;
    }
    return false;

} 

bool second(string s) {
    int vCnt = 0, cCnt = 0;
    for(auto c : s) {
        if(find(vowel.begin(),vowel.end(),c) != vowel.end()) { //모음이면
            vCnt++;
            if(vCnt == 3) return false;
            cCnt = 0;
        }
        else {
            cCnt++;
            if(cCnt == 3) return false;
            vCnt = 0;
        }
    }
    if(cCnt == 3 || vCnt == 3) return false;
    return true;
}

bool third(string s) {
    if(s.length() == 1) return true;
    for(int i=1; i<s.length(); i++) {
        if(s[i] == s[i-1]) {
            if(s[i] != 'e' && s[i] != 'o') return false;
            
        }
    }
    return true;
}

int main() {
    
    while(true) {
        string s;
        cin>>s;
        if(s == "end") break;
        if(first(s) && second(s) && third(s)) cout<<"<"<<s<<"> is acceptable."<<'\n';
        else cout<<"<"<<s<<"> is not acceptable."<<'\n';
        


    }
}
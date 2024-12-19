#include<bits/stdc++.h>
using namespace std;

bool isPseudoPalindrome(const string &s, int left, int right) {
    while(left < right) {
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int checkPalindrome(const string &str) {
    int len = str.length();
    int st = 0, en = len - 1;
    int diff = 0;
    while(st < en) {
        if(str[st] == str[en]) {
            st++;
            en--;
        }else {
            bool skipLeft = isPseudoPalindrome(str, st+1, en);
            bool skipRight = isPseudoPalindrome(str, st, en-1);
            if(skipLeft || skipRight) return 1;
            else return 2;
        }
    }
    return 0;

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        string str; cin>>str;
        cout<<checkPalindrome(str)<<'\n';
    }
}
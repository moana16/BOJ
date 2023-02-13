#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    int cnt = 0;
    int arr1[26]={}, arr2[26]={};
    cin>>s1;
    cin>>s2;

    for(auto c : s1) {
        arr1[c-97]++;
    }
    for(auto c : s2) {
        arr2[c-97]++;
    }
    for(int i=0; i<26; i++) {
        if(arr1[i] != arr2[i]) {
            cnt += abs(arr1[i]-arr2[i]);

        }
    }
    cout<<cnt;
}
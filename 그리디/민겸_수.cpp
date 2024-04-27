#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;

    string tmp = "";
    string mn, mx;

    for(auto c : str) {
        if(tmp.size() == 0) {
            if( c == 'K') mx += '5';
            else tmp += c;
        }
        else {
            int sz = tmp.size();
            if(tmp[sz-1] == 'M' && c == 'K') {
                mx += "5";
                while(sz--) {
                    mx += "0";
                }
                tmp = "";
            }
            else tmp += c;
        }
    }

    int sz = tmp.size();
    if(sz != 0) { 
        while(sz--) mx += "1";
    }
    tmp = "";
    cout<<mx<<'\n';

    for(auto c : str) {
        if(c == 'K') {
            if(tmp.size() != 0) {
                mn += "1";
                for(int i=0; i<tmp.size()-1; i++) mn += "0";
                mn += "5";
                tmp = "";     
            }
            else mn += "5";
        }
        else tmp += c;
    }

    if(tmp.size() != 0) {
        mn += "1";
        for(int i=0; i<tmp.size()-1; i++) mn += "0";
    }
    cout<<mn;
}
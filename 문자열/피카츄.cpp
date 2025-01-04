#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string str; cin>>str;

    int i=0;
    while(i < str.length()){
        if(str.substr(i,2) == "ka") i += 2;
        else if(str.substr(i,2) == "pi") i += 2;
        else if(str.substr(i,3) == "chu") i += 3;
        else {
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
}
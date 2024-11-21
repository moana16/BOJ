#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    string find;
    getline(cin,find);
    int cnt = 0;
    int len = find.length();

    for(int i=0; i<str.length(); i++) {
        if(str[i] == find[0]){  
            string sub = str.substr(i, len);
            if(sub == find) {
                cnt++;
                i += len-1;
            }
        }
    }

    cout<<cnt;
}
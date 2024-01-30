#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;

    int cnt = 0;
    int num = 666;

    while(true) {
        string numStr = to_string(num);

        if(numStr.find("666") != string::npos) {
            cnt++;
        }
        if(cnt == n) {
            cout<<numStr;
            break;
        }
        num++;
    } 

}
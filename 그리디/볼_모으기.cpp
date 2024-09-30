#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    string str; cin>>str;

    int leftR = 0, leftB = 0, rightR = 0, rightB = 0;

    for(int i=0; i<n; i++) {
        if(str[i] == 'R') leftR++;
        else break;
    }

     for(int i=0; i<n; i++) {
        if(str[i] == 'B') leftB++;
        else break;
    }

    for(int i=n-1; i>=0; i--) {
        if(str[i] == 'R') rightR++;
        else break;
    }

    for(int i=n-1; i>=0; i--) {
        if(str[i] == 'B') rightB++;
        else break;
    }

    int totalR = count(str.begin(), str.end(), 'R');
    int totalB = count(str.begin(), str.end(), 'B');

    int result = min({totalR - leftR, totalB - leftB, totalR - rightR, totalB - rightB});

    cout<<result;



    
}
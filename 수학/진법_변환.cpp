#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int B; 
    cin>>str>>B;
    long long ans = 0;

    int exp = str.length() - 1;
    for(int i=0; i<str.length(); i++) {
        int n;
        if(isalpha(str[i])) n = str[i] - 'A' + 10;
        else n = str[i] - '0';
        
        ans += n * pow(B, exp);
        exp--;
    }

    cout<<ans;
}

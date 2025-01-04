#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,h,w; cin>>n>>h>>w;
    string ans(n,'?');

    for(int i=0; i<h; i++) {
        string str; cin>>str;

        for(int j=0; j<n; j++) {
            for(int k=0; k<w; k++) {
                if(str[j*w+k] != '?') {
                ans[j] = str[j*w+k];
                break;
            }

            }
            
        }
    } 

    cout<<ans;


    

}
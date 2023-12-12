#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    int n = str.length();
    int r=0,c=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(i * j == n) {
                if(j > r) {
                    r = j;
                    c = i;
                }

            }
        }
    }
    char mat[r][c];
    int cnt=0;

    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            mat[j][i] = str[cnt];
            cnt++;
        }
    }
    string ans;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            ans += mat[i][j];
        }
    }
    cout<<ans;

}
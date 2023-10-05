#include <bits/stdc++.h>
using namespace std;

string A, B;
int dp[1001][1001];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>A;
    cin>>B;
    int size_A = A.length();
    int size_B = B.length();
    for(int i=1; i<=size_A; i++) {
        for(int j=1; j<=size_B; j++) {
            if(A[i-1] == B[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout<<dp[size_A][size_B];

}
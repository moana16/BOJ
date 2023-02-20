#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1003;

string A;
string B;
int dp[MAX][MAX];

void sol() {
    string str1= "#" + A;
    string str2 = "#" + B;

    int N = A.size();
    int M = B.size();

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            if(str1[i]==str2[j]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout<<dp[N][M];
}


int main() {
    cin>>A;
    cin>>B;

    sol();


}
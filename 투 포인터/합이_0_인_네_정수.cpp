#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> A(n), B(n), C(n), D(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    unordered_map<int, int> ABsums;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ABsums[A[i] + B[j]]++;
        }
    }

    long long ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int sumCD = C[i] + D[j];
            if(ABsums.find(-sumCD) != ABsums.end()) {
                ans += ABsums[-sumCD];
            }
        }
    }

    cout << ans;
    return 0;
}

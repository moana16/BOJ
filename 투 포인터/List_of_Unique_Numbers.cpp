#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    int st = 0;
    int en = 0;
    long long ans = 0;
    unordered_map<int, int> freq;
    
    while (st < N) {
        if (en == N) {
            en = st;
            st++;
        } else {
            if (freq[v[en]] == 0) {
                freq[v[en]]++;
                en++;
                ans += (en - st);
            } else {
                freq[v[st]]--;
                st++;
            }
        }
    }
    
    cout << ans << '\n';

    return 0;
}

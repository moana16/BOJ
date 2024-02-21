#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N, M;
    cin >> N >> M;
    
    vector<int> v(N);
    int MX = 0;
    for(int i = 0; i < N; i++) {
        cin >> v[i];
        MX = max(v[i], MX);
    }

    long long low = MX, high = 1LL * MX * N, res = high;
    while(low <= high) {
        long long mid = (low + high) / 2, sum = 0;
        int cnt = 1;
        for(int i = 0; i < N; i++) {
            if(sum + v[i] > mid) {
                sum = 0;
                cnt++;
            }
            sum += v[i];
        }

        if(cnt <= M) {
            res = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << res << endl;
}

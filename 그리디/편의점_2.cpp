#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<int> x(n), y(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        x[i] = v[i].first;
        y[i] = v[i].second;
    } 

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int mid_x = x[n / 2];
    int mid_y = y[n / 2];

    long long ans = 0;

    for(auto& c : v) {
        ans += abs(c.first - mid_x) + abs(c.second - mid_y);
    }

    cout << ans << endl;
}

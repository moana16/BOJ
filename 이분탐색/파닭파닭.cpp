#include<bits/stdc++.h>
using namespace std;

int main() {
    int S, C; cin >> S >> C;
    vector<int> P;
    for(int i = 0; i < S; i++) {
        int x; cin >> x;
        P.push_back(x);
    }
    long long low = 1, high = *max_element(P.begin(), P.end()), res = 0;

    while(low <= high) {
        long long mid = (low + high) / 2;
        long long cnt = 0;
        for(auto c : P) {
            cnt += c / mid; 
        }

        if(cnt >= C) { 
            res = mid; 
            low = mid + 1; 
        }
        else high = mid - 1; 
    }
    long long sum = 0;
    for(auto c : P) {
        sum += c;
    }
    long long used = res * C;
    cout << sum - used;
}

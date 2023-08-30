#include <bits/stdc++.h>
using namespace std;

map<long long, int> freq;
int N; 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) {
        long long x; cin>>x;
        freq[x]++;
    }

    long long most_freq = freq.begin()->first;
    int max_freq = freq.begin()->second;

    for(const auto &x : freq) {
        if(x.second > max_freq ||(x.second == max_freq &&x.first < most_freq ) ) {
            most_freq = x.first;
            max_freq = x.second;
        }
    }
    cout<<most_freq<<endl;
    return 0;

    


}
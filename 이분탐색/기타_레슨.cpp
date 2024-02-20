#include<bits/stdc++.h>
using namespace std;

int N,M;
vector<int> v;

int main() {
    cin>>N>>M;
    long long sum;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
        sum += x;
    }

    long long low = *max_element(v.begin(), v.end());
    long long high = sum/M;
    long long ans = 0;

    while(low <= high) {
        long long mid = (low + high) / 2;

        int cnt = 0, sum = 0;

        for(auto c : v) {
            if(sum + c > mid){
                sum = 0;
                cnt++;
            }
            sum += c;
            
        } 
        if(sum != 0) cnt++;

        if(cnt <= M) {
            high = mid-1;

        }
        else low = mid + 1;
    }
    cout<<low;



}
#include <bits/stdc++.h>
using namespace std;

long long arr[100003];
long long MIN = 200000003;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N; cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    int st = 0;
    int en = N-1;
    while(st < en) {
        long long sum = arr[st] + arr[en];
        
        if(abs(sum) < abs(MIN)) {
            MIN = sum;
        }
        if(sum <= 0) st++;
        else en--; 
    }
    cout<<MIN;
}
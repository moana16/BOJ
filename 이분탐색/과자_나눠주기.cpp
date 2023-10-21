#include <bits/stdc++.h>
using namespace std;

int M,N;
int arr[1000003];

bool solve(int x) {
    if(x == 0) return true;
    long long cnt = 0;
    for(int i=0; i<N; i++) {
        cnt += arr[i] / x;

    }
    return cnt >= M;
}

int main() {
    cin>>M>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr, arr+N);
    int st = 0;
    int en = arr[N-1];

    while(st < en) {
        int mid = (st+en+1)/2;
        if(solve(mid)) st = mid;
        else en = mid-1;
    }
    cout<<st;
}
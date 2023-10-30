#include <bits/stdc++.h>
using namespace std;

int arr[100003];
int MIN = 0x7fffffff;

int main() {
    int N,M; cin>>N>>M;
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr, arr+N);
    int en = 0;
    for(int st = 0; st<N; st++) {
        while(en < N && arr[en] - arr[st] < M) en++;
        if(en == N) break;
        MIN = min(MIN, arr[en]-arr[st]);

    }
    cout<<MIN;
}
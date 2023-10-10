#include <bits/stdc++.h>
using namespace std;
int N;
int arr[100003];
int MAX = 0;
int cnt = 0;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    for(int i=1; i<=N; i++) {
        MAX = max(MAX, arr[N-i]*i);

    }
    cout<<MAX;
}
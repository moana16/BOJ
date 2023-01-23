#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1e5;

int N,X;
int arr[MAX];
void sol() {
    for(int i=0; i<N; i++) {
        if(arr[i] < X) cout<<arr[i]<<" ";
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>N>>X;
    for(int i=0; i<N; i++) cin>>arr[i];
    sol();
}
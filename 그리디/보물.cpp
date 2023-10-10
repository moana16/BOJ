#include <bits/stdc++.h>
using namespace std;

int N;
int A[103];
int B[103];
int ans = 0;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) cin>>A[i];
    for(int i=0; i<N; i++) cin>>B[i];

    sort(A, A+N);
    sort(B, B+N, greater<>());

    for(int i=0; i<N; i++) {
        ans += A[i]*B[i];
    }

    cout<<ans;
}
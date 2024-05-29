#include<bits/stdc++.h>
using namespace std;

int N, ans = 2000;
int ability[22][22];

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>ability[i][j];
        }
    }

    for(int i=1; i<=N/2; i++) {
        int arr[N];
        fill(arr, arr+i, 0);
        fill(arr+i, arr+N,1);

        do {
            int t = 0;
            for(int i=0; i<N; i++) {
                for(int j=0; j<N; j++) {
                    if(i == j) continue;
                    if(arr[i] == arr[j]) {
                        if(arr[i] == 0) t -= ability[i][j];
                        else t += ability[i][j];
                    }
                }
            }
            ans = min(ans, abs(t));

        }
        while(next_permutation(arr, arr+N));
    }

    cout<<ans;
}
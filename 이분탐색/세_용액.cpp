#include <bits/stdc++.h>
using namespace std;

int N;
long long arr[5002];
long long MIN = 1e18;
long long ans[3];

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+N); //-97 -6 -2 6 98
    for(int i=0; i<N-2; i++) {
        long long st = i+1;
        long long en = N-1;

        while(st < en) {
            long long sum = arr[i] + arr[st] + arr[en];
            if(abs(sum) < MIN) {
                MIN = abs(sum);
                ans[0] = arr[i];
                ans[1] = arr[st];
                ans[2] = arr[en];

            }
            if(sum < 0) st++;
            else en--;
        }


    }
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
}
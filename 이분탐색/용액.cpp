#include <bits/stdc++.h>
using namespace std;

int N;
int arr[100003];
int ans[2];
long long  MIN = 2000000003;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    int st = 0;
    int en = N-1;
    while( st < en) {
        long long sum = arr[st] + arr[en] ;
        
        if(MIN >= abs(sum)) {
            MIN = abs(sum);
            ans[0] = arr[st];
            ans[1] = arr[en];
        }
        if(sum < 0) st++;
        else en--;
        
    }
    cout<<ans[0]<<" "<<ans[1];
}
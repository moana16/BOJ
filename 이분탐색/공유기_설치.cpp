#include <bits/stdc++.h>
using namespace std;

int N,C;
int arr[200003];

bool solve(int x) {
    int cnt = 1;
    int prev = arr[0];
    for(int i=1; i<N; i++) {
        if(arr[i] - prev >= x) {
            cnt++;
            prev = arr[i];

        }
    }
    if(cnt >= C) return true;
    return false;
}

int main() {
    cin>>N>>C;
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr, arr+N);

    //공유기의 최소 간격 찾기 이분탐색
    int st = 1;
    int en = arr[N-1] - arr[0];
    int ans = 0;
    while(st <= en) {
        int mid = (st + en) / 2;
        if(solve(mid)) {
            ans = max(ans, mid);
            st = mid + 1;
        }
        else en = mid - 1;
    }
    cout<<ans;


}
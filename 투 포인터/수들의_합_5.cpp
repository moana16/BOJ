#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;

    int s = 1;
    int e = 1;

    int cnt = 1, sum = 0;

    while(s <= e && e <= N) {
        if(sum < N) sum += e++;
        else {
            if(sum == N) cnt++;
            sum -= s++;
        }
    }

    cout<<cnt;


}
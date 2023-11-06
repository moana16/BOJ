#include<bits/stdc++.h>
using namespace std;

int N,d,k,c;
int arr[300003];
bool check[3001];
int flag,coupon,MAX = 0;
int main() {
    cin>>N>>d>>k>>c;
    for(int i=0; i<N; i++) cin>>arr[i];
    for(int i=0; i<N; i++) {
        flag = 0;
        coupon = 1;
        for(int j=i; j<i+k; j++) {
            if(check[arr[j%N]]) flag++;
            else check[arr[j%N]] = true;

            if(arr[j%N]==c) coupon= 0;
        }
        MAX = max(MAX, k-flag+coupon);
        memset(check, 0, sizeof(check)); // 체크 초기화
    }
    cout<<MAX;

}
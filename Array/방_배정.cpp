#include <bits/stdc++.h>
using namespace std;

int N, K;
int ans = 0;
int arr[7][2]={};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>N>>K;
    for(int i=0; i<N; i++) {
        int s,y;
        cin>>s>>y;
        arr[y][s]++;
    }

    /*for(int i = 1; i<=6; i++) {
        for(int j=0; j<2; j++) 
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }*/
    
   for(int i = 1; i<=6; i++) {
        for(int j=0; j<2; j++) {
            ans += arr[i][j]/K ;
            if(arr[i][j]%K) ans++;
            
        }
    }
    cout<<ans;

}
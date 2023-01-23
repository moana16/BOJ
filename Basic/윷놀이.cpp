//0이 1개면 도
//0이 4개면 윷 0개면 모
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4];
    for(int i=0; i<3; i++) {
        int cnt = 0;
        
        for(int j=0; j<4; j++) {
            cin>>arr[j];
            if(arr[j] == 0) cnt++;
        }
        if(cnt == 4 ) cout<<"D";
        else if(cnt == 3) cout<<"C";
        else if(cnt == 2) cout<<"B";
        else if(cnt == 1) cout<<"A";
        else cout<<"F";
        cout<<"\n";

    }
}
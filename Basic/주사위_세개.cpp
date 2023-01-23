#include <bits/stdc++.h>
using namespace std;

int arr[3];

int main() {
    for(int i=0; i<3; i++) cin>>arr[i];

    sort(arr,arr+3);

    if(arr[0] == arr[1] && arr[1] == arr[2]) cout<<arr[0]*1000+10000;
    else if(arr[0] == arr[1]) cout<<arr[0]*100+1000;
    else if(arr[1]==arr[2]) cout<<arr[1]*100+1000;
    else cout<<arr[2]*100;
        
    
        
}


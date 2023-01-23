#include <bits/stdc++.h>
using namespace std;

int avg,mid;

int main() {
    int arr[5];
    for(int i=0; i<5; i++ ){
        cin>>arr[i];

        avg = arr[i] + avg;

    }
    sort(arr,arr+5);
    cout<<avg/5<<"\n";
    cout<<arr[2];
}
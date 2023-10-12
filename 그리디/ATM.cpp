#include <bits/stdc++.h>
using namespace std;

int N;
int arr[1003];
int sum = 0;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr, arr+N);
    for(int i=0; i<N; i++) {
        for(int j=0; j<= i; j++) sum += arr[j];
    }
    cout<<sum;


}
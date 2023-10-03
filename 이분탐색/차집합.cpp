#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr1[500005];
int arr2[500005];
int sum = 0;
vector<int> v;

int main() {
    cin>>N>>M;
    for(int i=0;i<N;i++) cin>>arr1[i];
    for(int i=0;i<M;i++) cin>>arr2[i];

    sort(arr1,arr1+N);
    sort(arr2, arr2+M);

    for(int i=0;i<N; i++) {
        int ans = binary_search(arr2, arr2+M, arr1[i]);
        if(ans == 0) {
            sum++;
            v.push_back(arr1[i]);
        }

    }
    if(sum == 0) cout<<0;
    else {
        cout<<sum<<'\n';
        for(int i=0; i<sum; i++) {
            cout<<v[i]<<" ";

        }
    }


}
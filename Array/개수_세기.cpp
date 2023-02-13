#include <bits/stdc++.h>
using namespace std;
constexpr int MAX = 200;
int arr[MAX];

int main() {
    int N; cin>>N;
    int k, v;
    for(int i=0; i<N; i++) {
        cin>>k; arr[100-k]++;
    }
    cin>>v; cout<<arr[100-v];
    
}
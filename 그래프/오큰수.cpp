#include<bits/stdc++.h>
using namespace std;

int arr[1000003];
int ans[1000003];
stack<int> s;
int MX = 0;

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=n-1; i>=0; i--) {
        while (!s.empty() && s.top() <= arr[i]) s.pop();
        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();    
        s.push(arr[i]);
    }
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";

}
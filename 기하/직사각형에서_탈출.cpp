#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    int n = w-x;
    int m = h-y;
    vector<int> arr;
    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(n);
    arr.push_back(m);
    sort(arr.begin(),arr.end());
    cout<<arr[0];
}
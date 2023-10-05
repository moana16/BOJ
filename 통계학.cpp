#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    vector<int> counts;
    int n; cin>>n;
    float sum;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        sum += x;
        arr.push_back(x);
    }
    float avg = sum / n;
    sort(arr.begin(),arr.end());
    cout<<round(avg)<<'\n';
    cout<<arr[n/2]<<'\n';
    for(int i=0; i<n; i++) {
        int cnt = count(arr.begin(),arr.end(),arr[i]);
        counts.push_back(cnt);
    }
    int mx = *max_element(counts.begin(),counts.end());
    
    int x=0;
    for(int i=0; i<n; i++) {
        if(mx == counts[i]) {
            x++;
            if(i == n-1) cout<<arr[i]<<'\n';
            else {
                if(x == 2) cout<<arr[i]<<'\n';
            }
        }
    }
    cout<<arr.end()+abs(arr.begin())<<'\n';
    

}
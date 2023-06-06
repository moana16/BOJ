#include <bits/stdc++.h>
using namespace std;

int arr[10];
void sol(int k, vector<int> v) {
    if(k == 6 ) {
        for(int i=0; i<6; i++) cout<<arr[i]<<" ";
        cout<<'\n';
        return;
    }
    for(int i=0; i<v.size(); i++) {
        if(k > 0 && arr[k-1] >= v[i] ) continue;
        arr[k] = v[i];
        sol(k+1,v);
    }
}


int main() {
    while(true) {
        vector<int> v;
        int n; cin>>n;
        if(n == 0) break; 
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            v.push_back(x);
        }
        //for(int i=0; i<n; i++) cout<<v[i]<<" ";
        
        sol(0,v);
        cout<<'\n';

    }
    

}
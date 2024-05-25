#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(9);
    for(int i=0; i<9; i++) cin>>v[i];

    int arr[9];
    fill(arr, arr+7, 0);
    fill(arr+7, arr+9, 1);

    do {
        int total = 0;
        for(int i=0; i<9; i++) {
            if(arr[i] == 0) {
                total += v[i];
            }
        }

        if(total == 100) {
            for(int i=0; i<9; i++) {
                if(arr[i] == 0) {
                    cout<<v[i]<<'\n';
                }
            
            }
            break;
        }
    }
    while(next_permutation(arr, arr+9));
    
}
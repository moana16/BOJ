#include<bits/stdc++.h>
using namespace std;

int arr[9];
int p[9];

int main() {
    for(int i=0; i<9; i++) {
        cin>>p[i];
    }
    fill(arr+2, arr+9, 1);
    do {
        int total = 0;
        for(int i=0; i<9; i++) {
            if(arr[i] == 1) total += p[i];
        }
        if(total == 100) {
            vector<int> res;
            for(int i=0; i<9; i++) {
                if(arr[i] == 1) res.push_back(p[i]);
            }
            sort(res.begin(), res.end());
            for(auto s : res) cout << s << '\n';
            return 0; 
        }
    } while(next_permutation(arr, arr+9));

    return 0;

}
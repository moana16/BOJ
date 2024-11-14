#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

void printDivisors(int n) {
    vector<int> divs;
    for(int i=1; i*i <= n ; i++) {
        if(n%i == 0) {
            divs.push_back(i);
            if(i != n/i) {
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(), divs.end());

    for(auto d : divs) cout<<d<<'\n';
}

int main() {
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];

    int g = nums[0];

    for(int i=1; i<n; i++) {
        g = gcd(g, nums[i]);
    }

    printDivisors(g);
}
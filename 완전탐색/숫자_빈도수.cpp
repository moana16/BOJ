#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,d; cin>>n>>d;
    int sum = 0;
    char target = d + '0';

    for(int i=1; i<=n; i++) {
        string num = to_string(i);
        sum += count(num.begin(), num.end(), target);
    }
    cout<<sum;
}
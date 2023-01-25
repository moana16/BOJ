#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    int n;
    cin>>a>>b;
    if(a>b) {
        n = a-b-1;
        cout<<n<<'\n';
        for(int i=0; i<n; i++) {
            b++;
            cout<<b<<" ";

        }
        }
    else {
        n = b-a-1;
        cout<<n<<'\n';
        for(int i=0; i<n; i++) {
            a++;
            cout<<a<<" ";

        }
    }
    

}
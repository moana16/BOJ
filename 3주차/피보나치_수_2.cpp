#include <iostream>
using namespace std;

int main(void) {

    int n;
    cin>>n;
    
    long long fibo[n];
    
    fibo[0]=0;
    fibo[1]=1;

    for(int i=2; i<=n; i++) {
        fibo[i]=fibo[i-1]+fibo[i-2];

    }
    cout<<fibo[n];

}
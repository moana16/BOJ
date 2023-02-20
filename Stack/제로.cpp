#include <bits/stdc++.h>
using namespace std;


int main() {
    int k; cin>>k;
    stack<int> s;
    int num = 0;
    for(int i=0; i<k; i++) {
        int n; cin>>n;
        if(n == 0) s.pop();
        else  {
            s.push(n);
        }
    }
    while (!s.empty())
    {
        num += s.top();
        s.pop();
    }
    
    

    cout<<num;
}
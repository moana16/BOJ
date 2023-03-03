#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main() {
    int n; cin>>n;
    for(int i=1; i<=n; i++) {  
        q.push(i);
    }
    while(q.size()!=1) {
        q.pop();
        int x = q.front();
        //cout<<x<<" !";
        q.pop();
        q.push(x);

    }
    cout<<q.front();

}
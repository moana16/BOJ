#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    queue<int> q;

    for(int i=1; i<=N; i++) q.push(i);

    while(q.size() != 1) {
        int f = q.front(); q.pop();
        cout<<f<<" ";
        int s = q.front(); q.pop();
        q.push(s);
    }

    cout<<q.front();
}
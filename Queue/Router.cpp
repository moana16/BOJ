#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    int x; 
    queue<int> q;
    while(true) {
        cin>>x;
        if(x == -1) break;
        if(x == 0) q.pop();
        else {
            if(q.size() < N) q.push(x);
        }
    }
    if(q.empty()) cout<<"empty";
    else {
        while(!q.empty()) {
            cout<<q.front()<<" ";
            q.pop();
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
queue<pair<long long,long long>> q;

int main() {
    long long A,B; cin>>A>>B;

    q.push({A,1});

    while (!q.empty())
    {
        long long  x = q.front().first;
        long long cnt = q.front().second;
        q.pop();

        if(x == B) {
            cout<<cnt;
            return 0;

        }
        
        for(auto nxt : {2*x, x*10+1}) {
            if(nxt > B) continue;
            q.push({nxt,cnt+1});
        }
    }
    cout<<-1;
    

}
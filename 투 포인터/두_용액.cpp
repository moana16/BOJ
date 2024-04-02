#include<bits/stdc++.h>
using namespace std;

int N;
long long mn = 2000000003;
vector<int> v;
pair<int,int> q;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    int st = 0, en = N-1;

    sort(v.begin(), v.end());

    while(st < en) {
        long long x = v[st] + v[en];
        if(abs(x) < abs(mn)) {
            q.first = v[st];
            q.second = v[en];
            mn = abs(x);
        }
        if(x > 0) en--;
        else st++;
    }
    
    cout<<q.first<<" "<<q.second<<endl;


}
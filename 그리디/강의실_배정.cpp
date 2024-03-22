#include<bits/stdc++.h>
using namespace std;

int N;
priority_queue<int, vector<int>, greater<>> times;
vector<pair<int,int>> v;

int main() {
    cin>>N;
    int s,t;
    for(int i=0; i<N; i++) {
        cin>>s>>t;
        v.push_back({s,t});
    }
    times.push(0);
    sort(v.begin(), v.end());

   for(int i=0; i<N; i++) {
    int c = times.top();
    times.pop();

    if(v[i].first < c) times.push(c);
    times.push(v[i].second);
   }

   cout<<times.size();



}
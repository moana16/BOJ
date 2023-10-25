#include <bits/stdc++.h>
using namespace std;

map<int,set<int>> m; //O(lg N) 인 이진검색트리 STL
int propLevel[100002];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        int P,L; cin>>P>>L;
        m[L].insert(P);
        propLevel[P] = L;
        
    }
    int M; cin>>M;
    
    while(M--) {
        string cmd; 
        cin>>cmd;
        
        if(cmd == "add") {
            int P,L;
            cin >> P >> L;
            m[L].insert(P);
            propLevel[P] = L;
        }
        else if(cmd == "recommend") {
            int x; cin>>x;
            if(x == 1) {
                cout<<*m.rbegin()->second.rbegin()<<'\n';
            }
            else cout<<*m.begin()->second.begin()<<'\n';
        }
        else if(cmd == "solved"){
            int x; cin>>x;
            m[propLevel[x]].erase(x);
            if(m[propLevel[x]].size() == 0) {
                m.erase(propLevel[x]);
            }
        }
        
    }
}
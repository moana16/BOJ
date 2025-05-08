#include<bits/stdc++.h>
using namespace std;


int main() {
    map<char,int> mp = {{'A',3},{'B',2},{'C',1},{'D',2},{'E',3},{'F',3},{'G',3},{'H',3},{'I',1},{'J',1},{'K',3},{'L',1},{'M',3},{'N',3},{'O',1},
    {'P',2},{'Q',2},{'R',2},{'S',1},{'T',2},{'U',1},{'V',1},{'W',2},{'X',2},{'Y',2},{'Z',1}};

    string s; cin>>s;
    int N = s.length();

    queue<int> q;
    
    if(N % 2 == 0) {
        for(int i=0; i<N-1; i+=2) {
            q.push(mp[s[i]]+mp[s[i+1]]);
        }
    }else {
        for(int i=0; i<N-1; i+=2) {
            q.push(mp[s[i]]+mp[s[i+1]]);
        }
        q.push(mp[s[N-1]]);
    }

    while(q.size() != 1) {
        int x = q.front(); q.pop();
        int y = q.front(); q.pop();

        q.push((x+y)%10);
    }

    if(q.front() % 2 == 1) cout<<"I'm a winner!";
    else cout<<"You're the winner?";
}
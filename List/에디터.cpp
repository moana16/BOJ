#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    list<char> l;
    for(auto c : str) {
        l.push_back(c);
    }
    auto t = l.end(); //t를 커서라고 했지만 실제로 t는 원소를 가르킴
    int M; cin>>M;
    while(M--) {
        char tmp; cin>>tmp;
        if(tmp == 'L') {
            if(t != l.begin()) t--;

        }
        else if(tmp == 'D') {
            if(t != l.end()) t++;

        }
        else if(tmp == 'B') {
            if(t != l.begin()) {
                t--; //그래서 꼭 여기서 원소를 가르키게 t--를 해주고 해당 원소를 삭제 해야함
                t=l.erase(t);
            }
        }
        else {
            char c; cin>>c;
            l.insert(t,c);
        }
    }
    for(auto& c : l) {
        cout<<c;
    }
}

constexpr int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, char d) {
    dat[unused] = d;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

int main() {
    string str; cin>>str;
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    int cursor = 0;

    for(auto c : str) {
        insert(cursor, c);
        cursor++;
    }
    int m; cin>>m;
    while(m--) {
        char tmp; cin>>tmp;
        if(tmp == 'L') {
            if(pre[cursor] != -1) cursor = pre[cursor];

        }
        else if(tmp == 'D') {
            if(nxt[cursor] != -1) cursor = nxt[cursor];

        }
        else if(tmp == 'B') {
            if(cursor != 0) {
                erase(cursor);
                cursor = pre[cursor];
            }
        }
        else {
            char c; cin>>c;
            insert(cursor,c);
            cursor = nxt[cursor];
        }
    }
    int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur];
    cur = nxt[cur];
  }
}


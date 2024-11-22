#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    int cnt;
    while(cin>>N>>M) {
        string tmp;
        bool flag;
        cnt = 0;
        for(int i=N; i<=M; i++) {
            flag = true;
            tmp = to_string(i);
            for(int a=0; a<tmp.size(); a++) {
                for(int b=a+1; b<tmp.size(); b++) {
                    if(tmp[a] == tmp[b]) {
                        flag = false;
                        break;
                    } 
                }
            }
            if(flag) cnt++;
        }
        cout<<cnt<<'\n';
    }
    
}
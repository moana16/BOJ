#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; 
    while(true) {
        cin>>str;
        if(str == "*") break;

        int N = str.length();
        bool flag = true;

        for(int i=0; i<N-1; i++) {
            set<string> s;
            int cnt = 0;
            for(int j=0; j<N-i-1; j++) {
                string tmp;
                tmp.push_back(str[j]);
                tmp.push_back(str[j+i+1]);
                s.insert(tmp);
                cnt++;
            }

            if(s.size() != cnt) flag = false;
        }

        if(flag) cout<<str<<" is surprising.\n";
        else cout<<str<<" is NOT surprising.\n";
    }

    return 0;
}
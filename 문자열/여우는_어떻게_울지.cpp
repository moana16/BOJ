#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        vector<string> v;
        unordered_map<string,bool> m;

        string line,sound,str,animal,tmp;
        getline(cin, line);
        stringstream stream(line);

        while(stream>>sound) {
            v.push_back(sound);
        }

        while(true) {
            getline(cin,line);
            if(line == "what does the fox say?") break;

            stringstream str(line);
            str>>animal>>tmp>>sound;
            m[sound] = true;
        }

        for(auto ss : v) {
            if(!m[ss]) cout<<ss<<" ";
        }

    }
}
#include<bits/stdc++.h>
using namespace std;

string to_lowercase(const string& str) {
    string res = str;
    transform(res.begin(), res.end(), res.begin(), ::tolower);
    return res;
}
int main() {
    while(true) {
        int n; cin>>n;
        if(n == 0) return 0;
        map<string, string> mp;

        vector<string> words(n);
        for(int i=0; i<n; i++) {
            string str; cin>>str;
            mp[to_lowercase(str)] = str;
        }

        cout<<mp.begin()->second<<'\n';

    }
}
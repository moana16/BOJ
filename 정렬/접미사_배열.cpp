#include <bits/stdc++.h>
using namespace std;
string s;
vector<string> v;
int main() {
    cin>>s;
    for(int i=0; i<s.length(); i++) {
        string temp = s.substr(i, s.length());
        v.push_back(temp);

    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<'\n';
    }
    
    

}
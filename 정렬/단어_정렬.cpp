#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int N;

bool cmp(string& a, string& b) {
    int len_a = a.length();
    int len_b = b.length();

    if(len_a != len_b) return len_a < len_b;
    return a < b;
}

int main() {
    cin>>N;
    while(N--) {
        string s; cin>>s;
        if(find(v.begin(), v.end(), s)==v.end()) v.push_back(s);
    }
    
    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++) cout<<v[i]<<'\n';

}


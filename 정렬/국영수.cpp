#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<tuple<int,int,int,string>> students;
    while(n--) {
        string s;
        int x,y,z;
        cin>>s>>x>>y>>z;
        students.push_back({-x, y, -z, s});
    }

    sort(students.begin(), students.end());
    for(auto&s : students) {
        cout<<get<3>(s)<<'\n';
    }
}
#include<bits/stdc++.h>
using namespace std;

int N,M;
struct Title {
    string name;
    int power;
};

string findTitle(int power, const vector<Title>& titles) {
    int l = 0, r = titles.size()-1;
    string title="";
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(titles[mid].power >= power) {
            title = titles[mid].name;
            r = mid-1;
        }else l = mid+1;

    }
    return title;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;

    vector<Title> titles(N);
    for(int i=0; i<N; i++) {
        cin>>titles[i].name>>titles[i].power;
    }

    vector<int> powers(M);
    for(int i=0; i<M; i++) cin>>powers[i];

    for(int i=0; i<M; i++) cout<<findTitle(powers[i],titles)<<'\n';

    
}
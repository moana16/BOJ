#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);

    vector<string> words;
    string word;
    while(ss >> word) {
        words.push_back(word);
    }

    cout<<words.size();
}
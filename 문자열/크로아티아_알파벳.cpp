#include<bits/stdc++.h>
using namespace std;

vector<string> croatia = {"c=", "c-", "dz=","d-","lj","nj","s=","z="};
int main() {
    string str; cin>>str;
    int ans = 0;
    string tmp;
    
    for(const string&alphabet : croatia ) { // 크로아티아 벡터 순회
        int pos = 0; // 문자열에서 알파벳이 발견된 위치
        while((pos = str.find(alphabet, pos)) != string::npos) { // 찾으면 대체
            str.replace(pos, alphabet.size(), "*");
        }
    }


    cout<<str.length();

}
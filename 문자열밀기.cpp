#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    bool isSame = false;
    if(A.compare(B) == 0) return 0;
    for(int i=0; i<A.length(); i++) {
        char c = A.back();
        cout<<c<<" ";
        A.pop_back();
        A.insert(0,1,c);
        cout<<A<<'\n';
        answer++;
        if(A.compare(B) == 0) {
            isSame = true;
            break;
        } 
    }
    if(!isSame) answer = -1;
    return answer;
}
int main() {
    int answer = solution("hello","ohell");
    cout<<answer;
}
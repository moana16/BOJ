#include<bits/stdc++.h>
using namespace std;

int arr[10];
int ans = 0;

void sol(vector<int> answers, int cur, int total) {

    if(cur == 10) {
        if(total >= 5) ans++;
        return;
    }

    for(int i=1; i<=5; i++) {
        if(cur >= 2 && answers[cur-1] == answers[cur-2] && answers[cur-1] == i) continue;
        answers[cur] = i;
        if(answers[cur] == arr[cur]) sol(answers, cur+1, total+1);
        else sol(answers, cur+1, total);
    }

}

int main() {
    for(int i = 0; i < 10; i++) cin>>arr[i];
    vector<int> answers(10);
    sol(answers,0,0);
    cout<<ans;
}
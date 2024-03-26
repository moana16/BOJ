#include<bits/stdc++.h>
using namespace std;

int arr[100003], mis[100003];
int N, Q;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> arr[i];
    
    mis[1] = 0; // 첫 번째 악보에서는 실수가 없다고 가정
    for (int i = 2; i <= N; i++) {
        mis[i] = mis[i-1]; // 이전까지의 실수 횟수를 계승
        if (arr[i] < arr[i-1]) { // 현재 악보가 이전 악보보다 어렵다면 실수 횟수 증가
            mis[i]++;
        }
    }
    
    cin >> Q;
    while (Q--) {
        int x, y;
        cin >> x >> y;
        cout << mis[y] - mis[x] << '\n'; // x번째 악보에서의 실수를 제외한 실수 횟
    }
}
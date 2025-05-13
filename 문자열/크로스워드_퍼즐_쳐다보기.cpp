#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<string> mat(R);
    for (int i = 0; i < R; i++) cin >> mat[i];

    vector<string> words;

    for (int i = 0; i < R; i++) {
        string temp = "";
        for (int j = 0; j < C; j++) {
            if (mat[i][j] == '#') {
                if (temp.length() >= 2) words.push_back(temp);
                temp = "";
            } else {
                temp += mat[i][j];
            }
        }
        if (temp.length() >= 2) words.push_back(temp); 
    }

    for (int j = 0; j < C; j++) {
        string temp = "";
        for (int i = 0; i < R; i++) {
            if (mat[i][j] == '#') {
                if (temp.length() >= 2) words.push_back(temp);
                temp = "";
            } else {
                temp += mat[i][j];
            }
        }
        if (temp.length() >= 2) words.push_back(temp);
    }

    sort(words.begin(), words.end());
    cout << words[0] << "\n";
}

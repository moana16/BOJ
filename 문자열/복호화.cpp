#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // 개행 문자 제거

    while (T--) {
        string s;
        getline(cin, s);

        vector<int> freq(26, 0); // a~z 빈도

        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                freq[c - 'a']++;
            }
        }

        int max_freq = *max_element(freq.begin(), freq.end());
        int cnt = count(freq.begin(), freq.end(), max_freq);

        if (cnt == 1) {
            int index = find(freq.begin(), freq.end(), max_freq) - freq.begin();
            cout << (char)('a' + index) << '\n';
        } else {
            cout << "?\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; 
    cin >> str;
    int len = str.length();
    
    string result = ""; 
    result = string(len, 'z'); 

    for (int i = 1; i < len; i++) {
        for (int j = 1; j < len - i; j++) {
            int k = len - i - j;

            string str1 = str.substr(0, i);
            string str2 = str.substr(i, j);
            string str3 = str.substr(i + j, k);

            reverse(str1.begin(), str1.end());
            reverse(str2.begin(), str2.end());
            reverse(str3.begin(), str3.end());

            string tmp = str1 + str2 + str3;

            if (tmp < result) {
                result = tmp;
            }
        }
    }

    cout << result;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, key;
    getline(cin, str);  
    cin >> key;        

    int keyLength = key.length();
    string ans;
    int keyIndex = 0; 

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            ans += ' '; 
        } else {
            int shift = key[keyIndex % keyLength] - 'a' + 1;
            char encryptedChar = (str[i] - 'a' - shift + 26) % 26 + 'a';
            ans += encryptedChar;
        }
        keyIndex++;
    }

    cout << ans << endl;
    return 0;
}

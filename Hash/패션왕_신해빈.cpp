#include <bits/stdc++.h>
using namespace std;

int T;


int main()
{
    cin >> T;
    while (T--)
    {
        int sum = 1;
        int n;
        unordered_map<string, int> m;
        cin >> n;
        while (n--)
        {
            string s, type;
            cin >> s >> type;
            if (m.find(type) != m.end())
            {
                m[type] = m[type]+1;
            }
            else
                m[type] = 1;
        }

        for (auto c : m)
        {   
            sum *= (c.second + 1);
        }
        cout << sum - 1 << '\n';
    }
}
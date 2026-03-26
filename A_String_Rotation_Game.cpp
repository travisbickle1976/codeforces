#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        s.resize(n);   

        unordered_map<char, int> jake;

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            jake[s[i]]++;
        }

        int blog = 1;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                blog++;
            }
        }

        int check = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                check = 1;
            }
        }

        if (check == 1 && s[0] != s[n - 1]) {
            cout << (blog + check) << endl;
        } else {
            cout << blog << endl;
        }
    }
    return 0;
}
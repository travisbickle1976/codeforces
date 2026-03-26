#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b) {
    return a + b < b + a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<string> str(n);
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        sort(str.begin(), str.end(), cmp);

        for (int i = 0; i < n; i++) {
            cout << str[i];   // NO space
        }
        cout << '\n';
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> ans;

    for(int i = 10; i <= n; i *= 10){
        if(n % (i + 1) == 0){
            ans.push_back(n / (i + 1));
        }

        if(i > 1e18 / 10) break; // prevent overflow
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for(auto &it : ans){
        cout << it << " ";
    }
    cout << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
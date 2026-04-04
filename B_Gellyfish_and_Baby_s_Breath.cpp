#include<bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 998244353;

int modpow(int base, int exp){
    int res = 1;
    base %= MOD;
    while(exp){
        if(exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

void solve(){
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];

    int maxi1 = 0, maxi2 = 0;
    int index1 = 0, index2 = 0;

    vector<pair<int,int>> a;

    for(int i = 0; i < n; i++){
        int val;

        if(maxi1 < p[i]){
            maxi1 = p[i];
            index1 = i;
        }

        if(maxi2 < q[i]){
            maxi2 = q[i];
            index2 = i;
        }

        int maxi;

        if(maxi1 > maxi2){
            maxi = maxi1;
            val = q[i - index1];
        }
        else if(maxi1 < maxi2){
            maxi = maxi2;
            val = p[i - index2];
        }
        else{
            maxi = maxi1;

            int val1 = p[i - index2];
            int val2 = q[i - index1];

            val = max(val1, val2);
        }

        a.push_back({maxi, val});
    }

    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        int bit = (modpow(2, a[i].first) + modpow(2, a[i].second)) % MOD;
        ans[i] = bit;
    }

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
}
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1'000'012;
int a[maxn],dp[maxn];
int n;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        dp[i]=1000000000;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp[a[i]] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            dp[j]=min(dp[j],dp[i]+dp[j/i]);
        }
    }
      for(int i = 1; i <= n; i++) {
        if(dp[i] == 1000000000) {
            dp[i] = -1;
        }
        cout << dp[i] << " \n"[i==n];
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
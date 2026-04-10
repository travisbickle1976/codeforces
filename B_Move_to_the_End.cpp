#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>maxia(n);
    int s = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       s += a[i];
    }
    int maxi = 0;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[i] = s + max(0LL,maxi-a[i]);
        maxi = max(maxi,a[i]);
        s -= a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
signed main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}
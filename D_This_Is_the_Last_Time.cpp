#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<pair<int ,int>, int>>v(n);
    for(auto &[r,t]:v){
        cin>>r.first>>r.second>>t;
    }
    sort(v.begin(),v.end());
    int ans = k;
    for(auto &[R,t]:v){
        int l = R.first,r = R.second;
        if(l<=ans && ans<=r){
            ans = max(ans,t);
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
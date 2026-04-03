#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
void solve(){
long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<pair<long long,long long>>s;
    for(int i=0;i<n;i++){
        long long  j= 0;
        while(((1LL<<j )& a[i])){
            j++;
        }
        s.insert(mp(1LL<<j,i));
    }
    long long ans =0;
    for(int i=0;i<n;i++){
        ans += __builtin_popcountll(a[i]);
    }
    while(k>0){
    if(s.begin()->first <=k){
        k -= s.begin()->first;
        a[s.begin()->second] |= s.begin()->first;
        ans++;
        long long idx = s.begin()->second;
        s.erase(s.begin());
        long long j = 0;
        while((1LL<<j) & a[idx]){
            j++;
        }
        s.insert(mp(1LL<<j,idx));
    }
    else break;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
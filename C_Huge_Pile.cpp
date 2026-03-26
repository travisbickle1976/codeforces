#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

 int ans = -1;
 for(int jake = 0,l = n,r = n;r>=k;jake++,l/=2,r= (r+1)/2){
    if(l<=k && k<=r){
        ans = jake;
        break;
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
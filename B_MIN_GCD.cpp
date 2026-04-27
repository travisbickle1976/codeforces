
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
 int n;
    cin>>n;
    vector<int>a(n);
    
    for(int i=0;i<n;i++)cin>>a[i];
    int mini = a[0];
    for(int i=0;i<n;i++){
        mini = min(mini,a[i]);
    }
    int cnt =count(a.begin(),a.end(),mini);
    if(cnt>1){
        cout <<"YES"<<endl;
        return;
    }
    int g = 0;
    for(int i=0;i<n;i++){
        if(a[i]%mini == 0 && a[i] != mini){
            g = __gcd(a[i],g);
        }
    }
    if(g == mini){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
   return 0;
}
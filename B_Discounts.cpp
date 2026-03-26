#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(k);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++)cin>>b[i];
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    int j = 0;
    for(int i = 0;i<k;i++){
        int value = b[i];
        j += value-1;
        if(j<n){
         a[j]=0;
         j++;
        }
        else{
            break;
        }
    }
    long long ans = accumulate(a.begin(),a.end(),0LL);
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long>ans(n);
    long long count = 1;
    ans[0]=1;
    for(long long i=1;i<n;i++){
        long long diff = a[i]-a[i-1];
        if(i -diff >=0){
            ans[i]=ans[i-diff];
        }
        else{
            ans[i]=++count;
        }
    }
    for(long long i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
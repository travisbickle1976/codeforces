#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        long long x = a[i] % (k+1);
        a[i] += x*k;
    }
    for(auto it:a){
        cout<<it<<" ";

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
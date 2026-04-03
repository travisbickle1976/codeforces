#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>a(n);
    for(auto &x : a)cin>>x;
    if(2*a[0] - a[1] < 0 || (2*a[0]-a[1]) % (n+1)!=0){
        cout<<"NO"<<endl;
        return ;
    }
    long long x2 = (2*a[0]-a[1])/(n+1);
    long long x1 = a[0]-n*x2;
    if(x1 <0){
        cout<<"NO"<<endl;
        return;
    }
    bool pos = true;
    for(long long i=1;i<=n;i++){
        if(a[i-1]-i*x1 -( n-i+1)*x2 !=0) pos = false;
    }
    if(pos ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
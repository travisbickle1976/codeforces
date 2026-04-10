#include<bits/stdc++.h>
using namespace std;
#define int long long
bool isPrime(int n){
    if(n==2){
        return true;
    }
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
    int x,k;
    cin>>x>>k;
// firsrt thing is that never x#k is prime this is  for understanding the number and the cases
    if(x==2 && k==1){
        cout<<"Yes"<<endl;
    }
    else if(x==1 && k==2){
        cout<<"YES"<<endl;
    }    
    else if(k==1 && isPrime(x)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
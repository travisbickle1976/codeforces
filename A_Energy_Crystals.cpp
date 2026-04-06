#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    cout<<2*(64-__builtin_clzll(n))+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
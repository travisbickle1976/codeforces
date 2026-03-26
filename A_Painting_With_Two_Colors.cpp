#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if((n-b) % 2==1){
        cout<<"NO\n";
        return;
    }
    else{
        if(a<=b){
            cout<<"YES\n";
            
        }
        else if((n-a)%2 == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
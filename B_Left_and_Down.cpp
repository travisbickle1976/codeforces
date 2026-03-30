#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,k;
    cin>>x>>y>>k;

    for(int i=1;i<=k;i++){
        if(x % i == 0){
            int div = x / i;

            
            if(y/div <= k && y % div == 0){
                cout<<1<<endl;
                return;
            }
        }
    }
    cout<<2<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
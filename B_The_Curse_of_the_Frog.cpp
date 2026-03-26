#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,x;
    cin>>n>>x;
    long long curr = 0;
    long long maxi = -2e18;
    for(int i=0;i<n;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        curr += (b-1)*a;
        long long p = (a*b)-c;
        maxi = max(maxi,p);
    }
    if(x <= curr){
        cout<<0<<endl;
    }
    else if(maxi <= 0){
        cout<<-1<<endl;
    }
    else{
        cout<<(x-curr+maxi-1)/maxi<<endl;
    }
}





int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}

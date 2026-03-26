#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k,m;
        cin>>s>>k>>m;
        if(k<=s){
            if((m/k)%2==0){
                cout<<s-(m%k)<<endl;
            }
            else{
                cout<<k-(m%k)<<endl;
            }
        }
        else{
            int ans = max(s-(m%k),0);
            cout<<ans<<endl;
        }
    }
    return 0;
}
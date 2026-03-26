#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q,n,m;
        cin>>n>>m;
        cin>>p>>q;
        if(n>m && p > q){
            cout<<"YES";
        }
        else if(n>m && p < q){
            cout<<"NO";
        }
        else if(n<m && p > q){
            cout<<"NO";
        }
        else if(n<m && p < q){
            cout<<"YES";
        }
        cout<<"\n";
    }

    return 0;
}
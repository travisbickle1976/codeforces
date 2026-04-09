#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    int p = 0;
    for(int i=0;i<n;i++){
        if(p < x){
            a[i]=p;
            p++;
        }
        else if( p == x){
            p++;
            a[i]=p;
            p++;
        }
        else{
            a[i]=p;
            p++;
        }
        
    }
    if(n == 1){
       a[0]=0;
    }
    else{
        if(x<n){
        a[n-1]=x;}
    }
   
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

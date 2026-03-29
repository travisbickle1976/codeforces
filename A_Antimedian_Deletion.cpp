#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    if(n==2){
        cout<<2<<" "<<2;
        return ;
    }
    while(n--){
        cout<<2<<" ";
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
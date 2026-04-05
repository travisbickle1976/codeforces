#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int bit = abs(a[i]-a[i+1]);
        if(bit == 0 || bit == 1){
            cout<<0<<endl;
            return ;
        }
    }
    bool check1 = 0;
    bool check2 = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]+1){
            check1 = true;
            
        }
        if(a[i]<a[i+1]+1){
            check2 = true;
        }
    }
    if(!check1 || !check2 ){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"1"<<endl;
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
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int maxi = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    bool jake = true;
    for(int i=0;i<n;i++){
        if(i+1 < n && a[i]!=a[i+1]){
            jake = false;
            break;
        }
    }
    if(jake){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES\n";
    
    for(int i=0;i<n;i++){
        if(a[i]==maxi){
            cout<<1<<" ";
        }
        else{
        cout<<2<<" ";}
    }
cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]= n+1-x;
        
    }
    for(auto it: a){
        cout<<it<<" ";
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
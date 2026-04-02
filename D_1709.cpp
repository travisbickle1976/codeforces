#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int ,int>>ans;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                ans.push_back({1,j+1});
            }
            if(b[j]>b[j+1]){
                swap(b[j],b[j+1]);
                ans.push_back({2,j+1});
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            ans.push_back({3,i+1});
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
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
#include<bits/stdc++.h>
using namespace std;
int functionmax(int j, vector<int>& a){
int n = a.size();
int maxi = 0;
for(int i=j;i<n;i++){
    maxi = max(maxi,a[i]);
}
return maxi;
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x : v)cin>>x;
    map<int,int>mp;
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        if(mn > v[i]){
            mn = v[i];
            mp[v[i]] = 1;
        }
    }
    int mx = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(v[i] > mx){
            mx = v[i];
            mp[v[i]] =1;
        }
    }
    for(auto &x:v)cout<<mp[x];
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
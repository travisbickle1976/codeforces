#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
   vector<int>ans;
   for(int i=0;i<n;i++){
    if(s[i]=='0'){
        ans.push_back(i+1);
    }
   }
        cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    
    map<int ,int>hash;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        hash[x%k]++,hash[k-x%k]++;
      
    }
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        hash[x%k]--,hash[k-x%k]--;
        
    }
    for(auto it:hash){
        if(it.second){
        cout<<"NO"<<endl;
        return;
        }
    }
    cout<<"YES\n";

}

int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
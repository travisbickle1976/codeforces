#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
     cin>>n;
    vector<int>a(n);
    int p = n;
    map<int,int>hash;
    for(int i=0;i<n;i++){
        cin>>a[i];
       hash[a[i]]=1;
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
     while(hash.find(p)!= hash.end()){
                p--;
        }
        a[i]=p;
        hash[a[i]]=1;
    }
    }
    
        int l = 0;
        int r = n-1;
   
        while(l <= r&& a[l] ==l+1){
            l++;
        }
        while( r >= 0 && a[r]==r+1){
            r--;
        }
      

  
    int len = (r-l)+1;
    if(len <=0){
        cout<<0<<endl;
        return ;
    }
    cout<<len<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
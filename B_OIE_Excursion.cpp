#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
   vector<int>a(n);
 
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int count = 1;
   int maxi = 0;
   for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1] ){
        count++;
        maxi = max(maxi,count);
    }
    else{
        count = 1;
    }
   }
   if(maxi >= m){
    cout<<"NO"<<endl;
    return;
   }
   
    
   cout<<"YES"<<endl;

   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
   vector<int>a(n);
   vector<int>cnt(101,0);
   for(int i=0;i<n;i++){
    cin>>a[i];
        cnt[a[i]]++;
   }
   

   sort(a.begin(),a.end(),greater<int>());
   for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
        cout<<-1<<endl;
        return;
    }
   }
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
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
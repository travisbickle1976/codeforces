#include<bits/stdc++.h>
using namespace std;
void solve(){
int n,k;
    cin>>n>>k;
    vector<int>a(n); 
   for(int i=0;i<n;i++)cin>>a[i];
  int val = a[k-1];  
   sort(a.begin(),a.end());
   int level = 1;
    for(int i=0;i<n;i++){
       if(a[i] <= val){
        continue;
       }
       
        int time = a[i]-val;
         level = level + 1*(time-1);
         if(level > val){
            cout<<"NO"<<endl;
            return ;
         }
         else{
            level++;
            val = a[i];
         }
       
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
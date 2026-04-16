#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   string a;
   cin>>a;
   int count = 0;
   for(int i=0;i<n-1;i++){
    if((a[i]=='b'&& a[i+1]=='a') || (a[i]=='a' && a[i+1]=='b')){
        count++;
        i++;
    }
   }
   if(count%2==1){
    cout<<"Alice"<<endl;
    return;
   }
   cout<<"Bob"<<endl;

   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
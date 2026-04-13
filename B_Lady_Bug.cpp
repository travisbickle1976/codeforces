#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
   int odd1 = 0;
   int even1 = 0;
   for(int i=0;i<n;i++){
    if(a[i]=='1'&& i%2==0){
        odd1++;
    }
    else if(a[i]=='1' && i%2 == 1){
        even1++;
    }
   }
   int odd0 = 0;
   int even0 = 0;
   for(int i=0;i<n;i++){
    if(b[i]=='0'){
        if(i%2==0){
            even0++;
        }
        else{
            odd0++;
        }
    }
   }
   if(odd0 < odd1 || even0 < even1){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
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
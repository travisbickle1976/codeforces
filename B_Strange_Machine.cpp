#include<bits/stdc++.h>
using namespace std;
int main(){
    int tl;
    cin>>tl;
    while(tl--){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
   
   int count = 0;
   for(int i=0;i<n;i++){
    if(s[i]=='B'){
        count++;
    }
   }
   while(q--){
    int a;
    cin>>a;
    int ans = 0,i=0;
    if(count == 0){
        cout<<a<<endl;
        continue;
    }
    while(a>0){
        ans++;
        if(s[i]=='A')a--;
        else a/=2;
        i= (i+1)%n;

    }
    cout<<ans<<endl;
   }
   
     
   
}
    return 0;
}
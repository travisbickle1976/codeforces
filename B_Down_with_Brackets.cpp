#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int count = 0;
    
int n  = s.size();
    for(int i=0;i<s.size();i++){
       count += (s[i]=='('?1:-1);
       if(i<n-1 && count == 0){
        cout<<"YES"<<endl;
        return;
       }
    }
    cout<<"NO"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve(); 
    }
    return 0;
}
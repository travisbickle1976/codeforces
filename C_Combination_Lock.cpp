#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    cout<<n<<" ";
    while(--n){
        cout<<n<<" ";
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
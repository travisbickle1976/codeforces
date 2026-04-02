#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,s;
    cin>>n>>s;
    int count = 0;

    while(n--){
    int dx,dy,x,y;
    cin>>dx>>dy>>x>>y;
    if(dx*dy < 0 && x+y == s ){
        count++;
    }
    else if(dx*dy >0 && x== y){
        count++;
    }
    else{
        continue;
    }
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
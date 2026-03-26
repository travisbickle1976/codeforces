#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;

    string s;
    cin>>s;
     
    int count4 = 0;
    int count8 = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'){
            count4++;
        }
        else{
            count8++;
        }
    }
    int d1 = abs(x)+abs(y);
    int d2 = max(abs(x),abs(y));
    if(d1 <= count4+count8 + count8 && d2 <= count4+count8 ){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
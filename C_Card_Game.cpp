#include<bits/stdc++.h>
using namespace std;
void solve (){
     int n;
    cin>>n;
    string s;
    cin>>s;
    int ok = 0;
    ok = count(s.begin(),s.end(),'B');
    cout<<((s[n-1]=='B' && ok>=2) ||(s[0]=='B'&&s[n-2]=='B')?"Bob\n":"Alice\n");
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
   
    return 0;
}
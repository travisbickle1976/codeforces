#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int nonindex = 0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] != '0'){
            nonindex = i;
            break;
        }
    }
    int ans = 0;
    ans += s.size()-1-nonindex;
    int countf = 0;
    for(int i=0;i<nonindex;i++){
        if(s[i] != '0'){
            countf++;
        }
    }
    ans += countf;
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
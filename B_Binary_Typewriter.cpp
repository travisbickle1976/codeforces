#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char prev = '0';
    int cnt01 = 0;
    int cnt10 = 0;
    int T = 0;
    for(char c : s){
        if(c != prev){
            T++;
            if(prev == '0' && c == '1')cnt01++;
            if(prev == '1'&& c == '0')cnt10++;
        }
        prev = c;
    }
    int imp = 0;
    if(max(cnt01,cnt10)>=2) imp = 2;
    else if(cnt01 >=1 && cnt10 >= 1)imp = 1;
    cout<<n+T-imp<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
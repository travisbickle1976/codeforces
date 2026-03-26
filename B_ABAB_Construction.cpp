#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long a = (n+1)/2;
    long long b = n/2;
    int q = 0;
    for(auto c: s){
    if(a>b){
        if(c =='b'){
            cout<<"NO\n";
            return ;
        }
        a--;
    }
 else if(a<b){
        if(c =='a'){
            cout<<"NO\n";
            return ;
        }
        b--;
    }
else{
    if(c=='a'){
        a--;
        if(q)b--,q=0;
    }
    else if(c=='b'){
        b--;
        if(q)a--,q =0;
    }
    else{
        if(q)a--,b--,q=0;
        else{

        q++;
        }
    }
}
    
    }
    cout<<"YES"<<endl;
  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
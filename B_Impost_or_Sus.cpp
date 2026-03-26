#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    long long count = 0;
    bool jake = false;
    long long n =  s.size();
    for(int i=0;i<n;i++){
        if((i==0||i==n-1) && s[i]=='u'){
            s[i]='s';
            count++;
            jake = true;
        }
        else if(jake == false){
            if(s[i]=='u'&& s[i-1] != 's'){
                s[i]='s';
                count++;
               
            }
            if(s[i]=='u' && s[i-1] == 's'){
                jake = false;
            }
            else{
            jake = true;
            }
        }
    
        else{
            jake = false;
        }
    }
        cout<<count<<endl;
    
}
int main(){
    int t;
    cin>>t ;
    while(t--){
        solve();
    }
}
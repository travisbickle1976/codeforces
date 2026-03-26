#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s,str;
        cin>>s;
        str = s;
        int ans = 0;
        if(k==0){
            reverse(s.begin(),s.end());
            if(s > str){
                ans = 1;
            }
            else{
                ans = 0;
            }
        }
        else{
            for(int i=0;i<n-1;i++){
               if(s[i] != s[i+1]){
                ans = 1;
                break;
               }
            }
        }
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}
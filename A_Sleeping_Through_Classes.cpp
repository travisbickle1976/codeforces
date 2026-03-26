#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                for(int j=i;j<n && j<=i+k;j++){
                   if(str[j]=='0'){
                    str[j]='*';
                   }
                }
            }
        }
         for(int i=0;i<n;i++){
            if(str[i] == '0'){
                ans++;
            }
         }
        cout<<ans<<endl;
    }
}
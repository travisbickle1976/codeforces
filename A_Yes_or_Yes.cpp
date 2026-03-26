#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if( s[i]=='Y'){
                a++;
            }
        }
        if(a<=1){
            cout<<"YES\n";
        }
        else{
        cout<<"NO"<<endl;}
    }
    return 0;
}
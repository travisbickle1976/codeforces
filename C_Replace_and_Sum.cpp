#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       vector<int>pos;
       int ans;
        for(int i=0;i<n;i++){
          if(str[i] == '1'){
            pos.push_back(i);
          }
        }
    
        if(pos.size()==0 && n >= 2){
            ans = n/2;
        }
        else if(pos.size()==0 && n == 1){
            ans = 1;
        }
        else{
        int bit;
        for(int i=0;i<pos.size();i++){
            if(i == 0){
                bit = pos[i]-0;
                ans = bit/2;
            }
            if(i==pos.size()-1){
                bit = n-1-pos[i];
                ans = bit/2;
            }
            else{
                bit = pos[i+1]-pos[i];
                ans = bit/2;
            }
        }
    }
        
            cout <<ans<<"\n";
    }
    
    return 0;
}
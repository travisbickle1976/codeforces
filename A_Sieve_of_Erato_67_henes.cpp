#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        
        bool genel = true;
        for(int i=0;i<n;i++){
          
            if(arr[i]==67){
                genel = false;
            }
        }
        if( genel ==false ){
            cout<<"YES\n";
        }
        
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
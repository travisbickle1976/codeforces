#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        bool jake = false;
        for(int i=0;i<n;i++)cin>>arr[i];
       for(int i=0;i<n;i++){
        if(arr[0]%2==0){
            if(arr[i]%2==0){
                i++;}
            else{
                    jake = true;
                }
        }
          if(arr[0]%2==1){
            if(arr[i]%2==1){
                i++;}
            else{
                    jake = true;
            }
        }
       }
       if(jake==false){
        cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }


    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int left  = -1;
        for(int i=0;i<n;i++){
            if(arr[i] != n-i){
                left = i;
                break;
            }
        }
        if(left == -1){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
        else{
             int right = 0;
             for(int i=left;i<n;i++){
                if(arr[i] == n-left ){
                    right = i;
                    break;
                }
             }
             reverse(arr.begin()+left,arr.begin()+right+1);
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        
        }
       
    }
    return 0;
}

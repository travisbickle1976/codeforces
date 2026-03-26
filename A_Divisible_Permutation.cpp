#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int j = 1;
        int t = n;
        for(int i=n-1;i>=0;i-=2){
            arr[i] = j;
            arr[i-1]=t;
            t--;
            j++;
        }
        
       
      
      
       
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
          
    }
    return 0;
}
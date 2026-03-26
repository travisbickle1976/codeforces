#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   
    while(t--){
      
        int n,x;
        cin>>n>>x;
        
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int s = 0;
        int jake = 0;
        int bonus = 0;
       
        int last = n-1;
        int tom = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>=1 && arr[i]<= x){
                tom += arr[last];
            if((tom/x)>jake){
                bonus += arr[last];
                last--;
            
            } 
            else{
                s += arr[i];
                if((s/x)>jake){
                bonus += arr[i];
            
             
            } 
            
            }
            tom = tom + s;
             jake = (tom/x);
        }
        }
    
    cout<<bonus<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}

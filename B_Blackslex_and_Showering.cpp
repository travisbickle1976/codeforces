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
        int totalsum = 0;
        for(int j=0;j<n-1;j++){
            totalsum += abs(arr[j]-arr[j+1]);
        }



        int minimumsum = INT_MAX;
        for(int j=0;j<n;j++){
          
           
            int sum = totalsum;
            if(j > 0 && j < n-1){
                sum -= abs(arr[j]-arr[j+1]);
                sum -= abs(arr[j-1]-arr[j]);
                sum += abs(arr[j-1]-arr[j+1]);
            }
            else if(j==0){
                sum -= abs(arr[j]-arr[j+1]); 
            }
            else if(j==n-1){
                sum -= abs(arr[j] - arr[j-1]);
            }
            minimumsum = min(minimumsum,sum);
        }
        cout<<minimumsum<<endl;
    }
    return 0;
}
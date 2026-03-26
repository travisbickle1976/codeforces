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
        int ans = INT_MAX;
        vector<int>brr(n);
        brr = arr;
        sort(brr.begin(),brr.end());

        for(int i=0;i<n;i++){
            if(arr[i] != brr[i]){
                int bit = max(arr[i]-brr[0],brr[n-1]-arr[i]);
                ans = min(bit,ans);
            }
        }
        if(ans == INT_MAX){
            cout<<-1<<endl;
        }
        else{

        
        cout<<ans<<endl;
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(m);
        for(int i=0;i<m;i++)cin>>arr[i];
       int ans = 0;
       int maxi = 0;
        for(int i=0;i<m;i++){
            maxi = max(maxi,arr[i]);
            ans += arr[i]-1;
        }
        ans -= maxi-1;
        ans += n-maxi;
        cout<<ans<<endl;
        
    }
    return 0;
}
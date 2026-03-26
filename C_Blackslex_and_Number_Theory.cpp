#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
         cin>>n;
        int mini = INT_MAX;
        int second = INT_MAX;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            mini = min(mini,a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i] != mini){
                second = min(second,a[i]);
            }
        }
        int ans;
        int diff = second-mini;
        if(diff > mini){
            ans = diff;
        }
        else{
            ans = mini;
        }
        cout<<ans<<endl;
       // cout<<ans<<endl;
    }
    return 0;
}
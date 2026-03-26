#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi = max(maxi ,a[i]);
            mini = min(mini,a[i]);
        }
        int k;
        cin>>k;
        if(k<=maxi && k >= mini){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        int count = 0;
        int ans = 0;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<n;i++){
           count++;
           if(a[i] * count >= x){
            ans++;
            count = 0;
           }

        }
        cout<<ans<<endl;
    }
    
    return 0;
}
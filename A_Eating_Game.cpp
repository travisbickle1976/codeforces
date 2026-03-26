#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int maxi = 0;
        vector<int>hash(11,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            hash[a[i]]++;
            maxi = max(a[i],maxi);
        }
        int ans = hash[maxi];
        cout<<ans<<endl;
       
    }
    return 0;
}
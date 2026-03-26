#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        vector<int>cnt(30,0);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            for(int j=0;j<30;j++){
                cnt[j] += ((arr[i]>>j)&1);
            }
        }
        long long ans = 0;
            for(int i=1;i<=n;i++){
                long long tot = 0;
                for(int j=0;j<30;j++){
                    bool f = ((arr[i]>>j)&1);
                    if(f){
                        tot += (1LL<<j)*(n-cnt[j]);
                    }
                    else{
                        tot += (1LL<<j)*cnt[j];
                    }
                }
                ans = max(ans,tot);
            }
        
        cout<<ans<<endl;
    }
    return 0;
}
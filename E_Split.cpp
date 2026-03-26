#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n),count1(n+1),ct(n+1);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count1[arr[i]]++;
        }
        bool jake = false;
                for(int i=0;i<=n;i++){
            if(count1[i]%k != 0){
                cout<<0<<endl;
                jake = true;
                break;
            }
            else{
                count1[i] /= k;
            }
        }
        if(jake){continue;}
        long long res = 0;
        for(long long l=0,r=0;r>=l && r<n;r++){
            ct[arr[r]]++;
            while(ct[arr[r]]>count1[arr[r]]){
                ct[arr[l]]--;
                l++;
            }

            res += (r-l+1);
        }
        cout<<res<<endl;
    }
    return 0;
}

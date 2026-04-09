#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int maxi = 0;
        int mini = INT_MAX;
        int sum = 0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=x;
            sum += x;
            mini = min(mini,x);
            maxi = max(maxi,x);
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(a[i]==maxi){
                count++;
            }
        }

        if(maxi-mini > k+1 || (maxi-mini > k && count >= 2)){
            cout<<"Jerry"<<endl;
        }
        else{
            if(sum%2==1){
                cout<<"Tom"<<endl;
            }
            else{
                cout<<"Jerry"<<endl;
            }
        }
       
    }
}
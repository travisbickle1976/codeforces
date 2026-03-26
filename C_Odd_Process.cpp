#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>odd,even;
        for(int i=0;i<n;i++){
            if(a[i] & 1){
                odd.push_back(a[i]);
            }
            else{
                even.push_back(a[i]);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(even.begin(),even.end());
        vector<long long>prefixSum(int(even.size()+1));
        
        if(even.size()>0){
             prefixSum[0] = 0;
        for(int i=0;i<int(even.size());i++){
           
            prefixSum[i+1] = prefixSum[i] + even[i];
        }
    }
    int odd1 = 1;
    int even1 = 0;
    if(odd.size()==0){
        odd1=0,even1 = 1;
    }
    for(int k = 1;k<=n;k++){
        if(k>1){
            if(even1 < even.size()){
                even1++;
            }
            else{
                if(odd1+2<=odd.size()&&even1>0){
                    odd1 += 2;
                    even1--;
                }
                else{
                    odd1++;
                }
            }
        }
        if(odd1 % 2 == 1){
            cout<<odd.back()+prefixSum[even1]<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<"\n";
    }
    return 0;
}
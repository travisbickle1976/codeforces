#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> brr(n);
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        long long sum = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(brr[i]>0){
                count ++;
            }
            sum += brr[i];
        }
        long long sum2 = sum - count;
        long long sub =  (long long)n-1-sum2;
        long long jake = max(0ll,sub);
        
        cout<<count-jake<<"\n";
       
        
    }
    return 0;
}
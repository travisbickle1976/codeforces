#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum = 0;
        vector<int>ans(2*n,0);
        vector<vector<int>>aw(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cin>>aw[i][j];
            }
            }
        int ind = 1;
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(i==0 || j==n-1){
                sum += aw[i][j];
                ans[ind] = aw[i][j];
                ind++;
            }
            }
         }
        long long sumshould = 2*n*(2*n+1)/2;
        ans[0]= sumshould - sum;
        for(int i=0;i<2*n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
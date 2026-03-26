#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        long long count1 = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    count1++;
                }
            }
        }
        long long ans;
        long long apart = count1 / 2;
        long long bpart = count1-apart;
        ans = apart*bpart;
        cout<<ans<<endl;
        string str;
        vector<int>path(n);
        str.resize(n+m);
        int sum = 0;
        
        for(int i=n-1;i>=0;i--){
            
            for(int j=0;j<m;j++){
                sum += a[i][j];
                
                if(sum <= apart){
                    path[i]++;
 
                }
 
            }
            
        }
        int index = 0;
       for(int x:path){
        while(index < x){
            cout<<'R';
            index++;
        }
        cout<<'D';
       }
       while(index++ < m){
        cout<<'R';
       }
        
       cout<<endl;
    
    }
    return 0;
}
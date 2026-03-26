#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
vector<vector<int>>pfac(N+1);

void solve(){
     
        int n;
        cin>>n;
        vector<int>a;
        vector<int>black;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
         for(int i=0;i<n;i++){
            int x;
            cin>>x;
            black.push_back(x);
        }
        int ans = 2;
        map<int,int>cnt;
        for(int i=0;i<n;i++){
            for(int x:pfac[a[i]]){
                if(cnt[x]>0){
                    ans = 0;
                }
                    cnt[x]++;
                
            }
        }
        for(int i=0;i<n;i++){
            for(int x:pfac[a[i]]){
                cnt[x]--;
            }
            for(int x:pfac[a[i]+1]){
                if(cnt[x]>0){
                    ans = min(ans,1);
                }
            }
            for(int x:pfac[a[i]]){
                cnt[x]++;
            }
        }
        cout<<ans<<endl;
        
}
int main(){
   
        for(int i=2;i<=N;i++){
            if(!pfac[i].empty()){
                continue;
            }
        for(int j=i;j<=N;j+=i){
            pfac[j].push_back(i);
        }

        }
        int t;
        cin>>t;
        while(t--){
            solve();
        }

    
    
     
    
    return 0;
}
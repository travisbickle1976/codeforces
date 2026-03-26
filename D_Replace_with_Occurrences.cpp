#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
         vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            cin>>b[i];
            freq[b[i]]++;
        }
        vector<vector<int>>ind(n+1);
        for(int i=0;i<n;i++){
            ind[b[i]].push_back(i);
        }
        vector<int>ans(n);
        int x = 0;
        bool black = true;
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                continue;

            }

            if(freq[i]%i){
                cout<<"-1\n";
                black = false;
                break;
                
            }
           
            for(int j=0;j<freq[i];j++){
                if(j%i==0){
                    x++;
                }
                ans[ind[i][j]]=x;
            }
        

        
    }
    if(black == true){
        for(int i : ans){
            cout<<i<<" ";
        }
       cout<<"\n";
    }
        
    }
    return 0;
}
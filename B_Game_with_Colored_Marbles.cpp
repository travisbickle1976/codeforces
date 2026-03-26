#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int countdiff = 0;
        int countsame = 0;
        map<int,int>jake;
        for(int i=0;i<n;i++){
        jake[a[i]]++;

        }
        int ans;
       for(auto it : jake){
        if(it.second ==1){
            countdiff++;
        }
        else{
            countsame++;
        }
       }
        if(countdiff%2==1){
            ans = 2*(countdiff/2+1)+countsame;
    
        }
        else{
            ans = (2*countdiff/2)+countsame;
        }
        cout<<ans<<endl;
    }
    return 0;
}
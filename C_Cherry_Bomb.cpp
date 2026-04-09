#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,p;
    cin>>n>>p;
    vector<int>a(n),b(n);
    int maxi = 0;
    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
    }
      for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    bool check = false;
    for(int i=0;i<n;i++){
        if(b[i] != -1){
            check = true;
            break;
        }
    }

    if(!check){
            cout<<((mini+p)-maxi+1)<<endl;
            return;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(b[i] != -1){
             sum = a[i]+b[i];
            break;
        }
    }
            for(int j=0;j<n;j++){
                if(b[j]==-1){
                    b[j]=sum-a[j];
                }
            }
            for(int k=0;k<n;k++){
                if((b[k]<0 || b[k] > p ) ){
                    cout<<0<<endl;
                    return;
                }
            
                if(a[k]+b[k] != sum){
                        cout<<0<<endl;
                        return;
                    }
                
            
    }
    cout<<1<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

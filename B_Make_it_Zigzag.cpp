#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int maxi = 0;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i%2==1){
            if(x < maxi){
                a[i]=maxi;
            }
            else{
                a[i]=x;
            }
        }
        else{
            a[i]=x;
        }
        maxi = max(maxi,x);
      }
    //   for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    //   }
    //   cout<<endl;
      int count = 0;
      for(int i=0;i<n;i++){
        if(i%2==1){
            if(i-1 >=0  ){
                int diff = a[i-1]-a[i];
                if(diff<0){
                    diff = 0;
                }
                else{
                count += diff+1;
                a[i-1]=a[i]-1;
            }
            }
            if(i+1<n){
                int diff1 = a[i+1]-a[i];
                if(diff1<0){
                    diff1 = 0;
                }
                else{
                count += diff1+1;
                a[i+1]=a[i]-1;
            }
            }
        }
      }
      cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
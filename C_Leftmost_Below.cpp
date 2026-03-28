#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int maxi = a[0];
    for(int i=0;i<n-1;i++){
        int maxnum = 2*maxi-1;
        if(a[i+1] <= maxnum){

            maxi = min(maxi,a[i+1]);
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;;
}
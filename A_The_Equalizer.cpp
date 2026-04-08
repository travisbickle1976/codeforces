#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    if(sum%2==1){
        cout<<"YES"<<endl;
        return;
    }
    else{
        long long bit = n*k;
        if(bit%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
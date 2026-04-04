#include<bits/stdc++.h>
using namespace std;
void solve(){
    int  n;
    cin>>n;
    vector<int>a(n);
    int count = 1;
    for(int i=0;i<n;i++)cin>>a[i];
    int ind = 0;
    for(int i=1;i<n;i++){
        if(a[ind]+1 < a[i] ){
            count++;
            ind = i;
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
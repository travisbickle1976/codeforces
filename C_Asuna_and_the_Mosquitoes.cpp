#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    long long sum = 0;
    int countodd = 0;
    int counteven = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==1){
            countodd++;
        }
        else{
            counteven++;
        }
        sum += a[i];
        maxi = max(maxi,a[i]);
    }
    if(counteven != 0 && counteven != n ){
        cout<<(sum-countodd+1)<<endl;
        return;
    }
    cout<<maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
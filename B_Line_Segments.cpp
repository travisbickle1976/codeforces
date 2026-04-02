#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long p1,p2,q1,q2;
    cin>>p1>>p2>>q1>>q2;
    vector<long long>a(n);
    long long sum = 0;
    long long maxi = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
        sum += a[i];
    }
    
     long long x_ =(q1-p1)*(q1-p1);
     long long y_ = (q2-p2)*(q2-p2);
        long long dis = x_ + y_;
    if(dis > sum*sum){
        cout<<"NO"<<endl;
        return;
    }
    long long mn = max(2*maxi - sum,0LL);
    if(mn*mn > dis){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
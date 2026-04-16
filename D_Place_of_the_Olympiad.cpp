#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int low = 1;
    int high = m;
    while(low<= high){
    int mid = low+(high-low)/2;
    long long bit = (long long)n*(mid*((m)/(mid+1)) + ((m)%(mid+1)));
    if(bit >= k){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
    }
    cout<<low<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
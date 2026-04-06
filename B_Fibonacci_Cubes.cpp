#include<bits/stdc++.h>
using namespace std;
long long fib[12];
void solve(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        cout<<(a[0]>=fib[n] && a[2]>= fib[n+1]);
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    fib[1] = 1;
    fib[2] = 2;
    for(int i = 3; i <= 11; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    while(t--){
        solve();
    }
}
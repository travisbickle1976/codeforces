#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;   

    vector<int> a(n+1), b(n);

    for(int i = 0; i < n; i++){
        int x;
         cin >> x;
         a[x]=i;
    }
    for(int i = 0; i < n; i++){
         cin >> b[i];
         b[i]=a[b[i]];
    }
    cout<<(is_sorted(b.begin(),b.end())?"YES":"NO")<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
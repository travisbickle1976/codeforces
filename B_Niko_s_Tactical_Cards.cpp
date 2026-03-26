#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; ++i) 
            cin >> a[i];
        for (int i = 0; i < n; ++i) 
            cin >> b[i];
      long long mn = 0;
      long long mx = 0;
      for(int i=0;i<n;i++){
        long long nxm = min({mn-a[i],b[i]-mn,mx-a[i],b[i]-mx});
        mx = max({mn-a[i],b[i]-mn,mx-a[i],b[i]-mx});
        mn = nxm;
      }
      cout<<mx<<endl;
    }
}
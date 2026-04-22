#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cout << max(count_if(a + i + 1, a + n, [&](int x) { return x < a[i]; }),
                count_if(a + i + 1, a + n, [&](int x) { return x > a[i]; })) << ' ';
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        solve();

    }
    return 0;
}
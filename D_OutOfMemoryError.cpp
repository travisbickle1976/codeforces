#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,m,h;
        cin >>n>>m>>h;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
           }
        
        vector<int>d;
          d = a;
        int k = 1;
           
        set<int>st;
        while(m--){
        int b , c;
            cin>>b>>c;
            
            if(!st.count(b))a[b] = d[b],st.insert(b);
            a[b] += c;
            if(h<a[b])st.clear();
        }
    for(int i=1;i<=n;++i)cout<<(st.count(i)?a[i]:d[i])<<" ";cout<<endl;
  

}
}
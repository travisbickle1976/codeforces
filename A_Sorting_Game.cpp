#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
 
int T,n;
char s[N];
int a[N];
 
void solve() {
    for(int i=1;i<=n;i++) a[i]=s[i]-'0';
    sort(a+1,a+1+n);
    vector<int>sp;
    for(int i=1;i<=n;i++) {
        if((s[i]-'0')!=a[i]) sp.push_back(i);
    }
    if(sp.empty()) puts("Bob");
    else {
        puts("Alice");
        printf("%d\n",sp.size());
        for(int u:sp) printf("%d ",u);
        puts("");
    }
}
 
int main() {
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        scanf("%s",s+1);
        solve();
    }
}
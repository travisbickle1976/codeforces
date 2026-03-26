#include<bits/stdc++.h>
using namespace std;
const int N=5010;
#define mkp make_pair
 
int T,n,a[N];
vector<pair<int,int> >ans;
void add(int l,int r) {ans.push_back(mkp(l,r));}
void solve()
{
    ans.clear();
    if(a[1]==0&&a[n]!=0) {add(1,n-1),add(1,2); return;}
    if(a[1]!=0&&a[n]==0) {add(2,n),add(1,2); return;}
    if(a[1]==0&&a[n]==0)
    {
        add(1,2); add(2,n-1);
        add(1,2); return;
    }
    int ps=-1;
    for(int i=2;i<=n;i++)
        if(a[i]==0) ps=i;
    if(ps!=-1) {add(2,n); add(1,2); return;}
    add(1,n);
}
 
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        solve();
        printf("%d\n",(int)ans.size());
        for(auto t:ans) printf("%d %d\n",t.first,t.second);
    }
}
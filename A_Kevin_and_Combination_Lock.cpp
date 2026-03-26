#include<bits/stdc++.h>
using namespace std;
 
int T,n;
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        if(n%33==0) puts("Yes");
        else puts("No");
    }
}
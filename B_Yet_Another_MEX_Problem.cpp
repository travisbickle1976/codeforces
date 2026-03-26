#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<bool>c(n+1,false);
        int m = 0;
        for(int i=0;i<n;i++){
            int a ;
            cin>>a;
            c[a] = true;
            while(c[m])m++;
        }
        cout<<min(m,k-1)<<endl;

    }
    return 0;

}
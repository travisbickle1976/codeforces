#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l1,r;
        cin>>n>>m>>l1>>r;
        int p = n-m;
        int diff = r-p;
        if(diff < 0){ 
            l1 = l1 + -1*diff;
            diff = 0;
        }
       cout<<l1<<" "<<diff<<endl;
    }
    return 0;
}
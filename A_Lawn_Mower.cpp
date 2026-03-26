#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,w;
        cin>>n>>w;
        if(n==0 || w==0){
            cout<<0<<endl;
            continue;
        }
        if(w > n){
            cout<<n<<endl;
            continue;
        }
       long long count1 = n - (n/w);
        
       
        
        cout<<count1<<endl;

    }
    return 0;
}
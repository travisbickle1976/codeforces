#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==-1 && a[n-1]==-1){
            a[0]=0;
            a[n-1]=0;
        }
        if(a[0]==-1)a[0]=a[n-1];
        if(a[n-1]==-1)a[n-1]=a[0];
       
        for(int i=0;i<n;i++){
            if(a[i]==-1){
                a[i]=0;
            }
        }
        long long sum = 0;
        sum = abs(a[n-1]-a[0]);
        cout<<sum<<endl;
         for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
         }
         cout<<endl;
    }
    return 0;
}
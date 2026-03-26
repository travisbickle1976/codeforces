#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long sum = 0;
        for(int i=0;i<n;i++ ) sum += (a[i]/x)*y;
        long long maxi = 0;
        for(int i=0;i<n;i++){
            long long jake = sum - ((a[i]/x)*y)+a[i];
            maxi = max(jake,maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;
}


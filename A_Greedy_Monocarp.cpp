#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        long long sum = 0;
        for(int i=0;i<n;i++){
            if(sum+a[i] <= m){
                sum += a[i];
            }
            else{
                break;
            }

        }
        cout<<(m-sum)<<endl;
        
    }
    return 0;
}
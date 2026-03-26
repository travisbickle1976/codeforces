#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int k = 1;
    
    int maxi = 1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]==1){
            k++;
            maxi = max(maxi,k);
        }
        else if(a[i]==a[i+1]){
            continue;
        }
        else{
            k = 1;
        }
    }
    cout<<maxi<<endl;
}
    return  0;
}
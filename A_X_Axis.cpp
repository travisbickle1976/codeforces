#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   while(t--){
    vector<int>a(3);
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<3;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
    }
    cout<<maxi-mini<<endl;
   }
    return 0;
}
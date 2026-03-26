#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
         cin>>n;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mini = min(mini, x);
        }
        cout<<mini<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b = 1;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=1;i<n;i+=2){
            if(i+1<n && a[i] < a[i+1]){
                b = 0;
                cout<<"NO\n";
                break;
            }
        }
        if(b){
            cout<<"YES\n";
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool jake = false;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<=n;i++){
            int k = i;
            while( k>0  && k % 2==0 && arr[k] < arr[k/2]){
                swap(arr[k],arr[k/2]);
                k /=2;
            }
        }
       
        for(int i=1;i<=n;i++){
            if( i>1 && arr[i]-arr[i-1] != 1){
                jake = true;
            }
        }
        if(jake==false){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
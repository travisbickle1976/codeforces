#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>hash(10,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool jake = false;
        for(int i=0;i<n;i++){
            hash[a[i]]++;
            if(hash[0]>=3 && hash[1]>=1 && hash[2]>=2 && hash[5] >= 1 && hash[3]>=1){
                cout<<i+1<<endl;
                jake = true;
                break;
            }

        }
        if(jake==false){
            cout<<0<<endl;
        }
    }
    return 0;
}

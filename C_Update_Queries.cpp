#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>ind(m);
        for(int i=0;i<m;i++){
            cin>>ind[i];
        }
        string c;
        cin>>c;
        sort(ind.begin(),ind.end());
        sort(c.begin(),c.end());
        int k = 0;
        for(int i=0;i<m;i++){
           
          if( i == 0 || (ind[i-1] != ind[i])){
            s[ind[i]-1]=c[k];
            k++;
          }
        }
        cout<<s<<endl;
    }
    return 0;
}
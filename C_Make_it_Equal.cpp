#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>jake,black;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            jake.push_back(x);
        }
         for(int i=0;i<n;i++){
           int y;
            cin>>y;
            black.push_back(y);
        }
        bool tom = false;
        sort(jake.begin(),jake.end());
        sort(black.begin(),black.end());
         for(int i=0;i<n;i++){
           int diff = abs((black[i]-jake[i]));
           if(diff > m){
            cout<<"NO"<<endl;
            tom = true;
           }
         }
         if(tom==false){
            cout<<"YES"<<endl;
         }
        


    }
    return 0;
}
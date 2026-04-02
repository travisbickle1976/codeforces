#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    int maxi = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            maxi = max(maxi,a[i][j]);
        }
    }
    vector<pair<int,int>>jake;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==maxi){
                jake.push_back({i,j});
            }
        }
    }
    int row = jake[0].first;
    int col = jake[0].second;
    int row2 = 0;
    int col2 =0;
    int count =0;
    for(auto &it: jake){
        
        if((it.second != col) &&  ( it.first != row)){
            row2 = it.first;
            col2 = it.second;
            break;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maxi==a[i][j]){
                if(i != row && i != row2 && j!= col && j != col2){
                    cout<<maxi<<endl;
                    return;
                }
            }
        }
    }
    cout<<maxi-1<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
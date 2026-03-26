#include<bits/stdc++.h>
using namespace std;
inline bool in(int i,int j,int n,int m){
    return (0<=i&&i<n&&j<m&&j>=0);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int idx[] = {-1,0,1,0};
    int idy[] = {0,-1,0,1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int maxi = 0;
            for(int k=0;k<4;k++){
                int ni = i + idx[k],nj = j+idy[k];
                if(in(ni,nj,n,m)){
                    maxi = max(maxi , a[ni][nj]);
                }
            }
            a[i][j]=min(a[i][j],maxi);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    }
    return 0;

}
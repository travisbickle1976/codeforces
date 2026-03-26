#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int number = 1;
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=number;
                number++;
            }
        }
        int maxi = 0;
        vector<int>xaxis = {1,0,-1,0};
        vector<int>yaxis = {0,1,0,-1};
        for(int i=0;i<n;i++){
           
            for(int j=0;j<n;j++){
                 int sum = a[i][j];
                 for(int k=0;k<4;k++){
                    int ni = i+xaxis[k];
                    int nj = j+yaxis[k];
                if(ni >= 0 && ni < n && nj >=0 && nj < n){
                    sum += a[ni][nj];
                }
              
                maxi = max(maxi,sum);
            }
            }
        }
        cout<<maxi<<endl;

    }
    return 0;
}
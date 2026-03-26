#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
   vector<int>a(n);
    vector<int>hash(n+1,0);
    for(int i=0;i<n;i++){
        int x;
    
        cin>>x;
        a[i]=x;
        hash[x] += 1;
    }
    int count = 0;
    int number = 0;
    int arr[n+1]={0};
    for(int j=0;j<n;j++){
        int y = a[j];
        if(arr[y] == -1){
        continue;
    }
        if(y>number){

        
    

        int numof = hash[y]/y;
        count += y*numof;
    arr[y]= -1;
    number = y;
          
    }
}
    cout<<count<<endl;



}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
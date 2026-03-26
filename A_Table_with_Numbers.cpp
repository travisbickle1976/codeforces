#include<bits/stdc++.h>
using namespace std;
void solve(){

int n,h,l;
    cin>>n>>h>>l;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int countnum = 0;
    int great ;
    int mini;
    if(h>l){
        great = h;

    }
    else{
        great = l;
    }
    for(int i =0;i<n;i++){
        if(a[i] <= great){
            countnum++;
        }
    }
    int count1 = 0;
    if(h<l){
        mini = h;
    }
    else{
        mini = l;
    }
    for(int i=0;i<n;i++){
        if(a[i]<= mini){
            count1++;
        }
    }
    int ans = 0;
    
    int diff = countnum-count1;
    if(diff <= count1){
        ans = countnum/2;
    }
    else{
        ans =(2*count1)/2;
    }
        
    
    cout<<ans<<endl;}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    


}
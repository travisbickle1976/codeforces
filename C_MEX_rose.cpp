#include<bits/stdc++.h>
using namespace std;
void  solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    map<int,int>hash;
    for(int i=0;i<n;i++){
        cin>>a[i];
        hash[a[i]] += 1;
    }
    int countnotpresent = 0;    
    int countofsamenum = 0;
    for(int i=0;i<k;i++){
        if(hash.find(i) == hash.end()){
            countnotpresent++;
        }
    }
    countofsamenum = hash[k];
    int ans = 0;
    if(countofsamenum <= countnotpresent){
        ans = countnotpresent;
    }
    else{
        ans = countnotpresent + (countofsamenum-countnotpresent);
    }

cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();}
}
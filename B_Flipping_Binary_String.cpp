#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1 = 0;
    int count0 = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count1++;
        }
        else{
            count0++;
        }
    }
    if(count1 % 2==0){
        cout<<count1<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cout<<i+1<<" ";
            }
        }
        if(count1 != 0){
            cout<<"\n";
        }
    }
    else{
        if(count0 %2 == 1){
                cout<<count0<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cout<<i+1<<" ";
            }
        }
        }
        else{
        cout<<"-1\n";
        }
    }


}
int main(){
    int  t;
    cin>>t;
    while(t--){

    
    solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,s;
    cin>>n>>s;
    int sum = 0;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum += x;
        if(x==1){
            count1++;
        }
        else if(x==2){
            count2++;
        }
        else{
            count0++;
        }
    }
    if(sum > s ||s == sum+1 ){
        while(count1--){
            cout<<1<<" ";
        }
        while(count2--){
            cout<<2<<" ";
        }
        while(count0--){
            cout<<0<<" ";
        }
        cout<<endl;
        return ;
    }
    cout<<-1<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
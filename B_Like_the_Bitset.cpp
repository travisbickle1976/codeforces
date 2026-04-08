#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    int maxiLen = 0;
    int len = 0;
    int num = 1;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            len++;
        ans[i]=num;
        num++;//sahi hain bus main kuch hi kar raha hon mughe nahi samghe anhin aar hai ok 
            maxiLen = max(maxiLen,len);
        }
        else{
            len = 0;
        }
    }
    if(maxiLen>=k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            if(ans[i]==0){
                cout<<num<<" ";
                num++;
            }
            else{
                cout<<ans[i]<<" ";
            }
        }
      cout<<endl;
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        if(n % 2 ==1){
            cout<<0<<endl;
        }
        else{
            count = n/4;
             count = count+1;
            cout<<count<<endl;
        }
    }
    return 0;
}
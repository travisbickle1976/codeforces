#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<(a==b || b*c <= a?"1":"2")<<endl;

    }
    return  0;
}
#include<bits/stdc++.h>
using namespace std;
void sol(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if((a[0]+a[n-1])%2==0){
        cout<<0<<endl;
        return;
    }
    int count1 = 0;
    int count2 = 0;
    int p=0,k = n-1;
    while((a[n-1]+a[p])%2 !=0){
        count1++;
        p++;
    }
    while((a[0]+a[k])%2 !=0){
        count2++;
        k--;}
        cout<<min(count1,count2)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
}

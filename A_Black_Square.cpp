#include<iostream>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    string str;
    cin>>str;
    int ans = 0;
    for(int i=0;i<str.length();i++){
       int k = str[i]-48;
       k = k-1;
       ans += arr[k];
    }
    
    
    cout<<ans;
    return 0;
}
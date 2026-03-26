#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];  
    }
    
        int ans = 0;
    for(int i=0;i<n;i++){
       for(int j=0;j<3;j++){
        if(str[i][j]=='+'){
            ans++;
            break;
        }
         if(str[i][j] == '-'){
            ans--;
            break;
        }
       }
        
    }
    cout<<ans;
    return 0;
}
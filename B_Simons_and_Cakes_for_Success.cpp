#include<bits/stdc++.h>
using namespace std;

int main(){
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      int ans = 1;
      for(int i=2;i*i<=n;i++){
        int check = 0;
         while(n%i==0){
                n /= i;
               check = 1;
        }  
       if(check)ans *= i;
        
      }
      if(n)ans *= n;
       cout<<ans<<endl;

    }
    return 0;
}
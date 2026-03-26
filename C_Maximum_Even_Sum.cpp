#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
      long long ans = -1;
      long long d = b;
      long long sum = a*b+b/d;
      if(sum % 2 == 0){
        ans = sum;
      }
      else{
        if(b%2==0){
            d = b/2;
            sum = a*d+b/d;
             if(sum % 2 == 0){
              ans = sum;
      }
        }
      
      else{
        d = 1;
        sum = a*d+b/d;
         if(sum % 2 == 0){
        ans = sum;
      }
      }
    }
     
      cout<<ans<<endl;

    }
    return 0;
}
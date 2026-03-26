#include<bits/stdc++.h>
using namespace std;
long long power(long long base ,long long exp){
    long long result = 1;
    while(exp){
        if(exp % 2){
            result *= base;    
      }
    
         base *= base;
        exp /= 2;
      
       
      
    }
    return result;
}
long long coinsFunction(long long x){
    long long y = power(3,x+1)+x*power(3,x-1);
    return y;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        long long totalcoins = 0;
       
        
        while(n>0){
             long long maxpower = 0;
              long long jake = 1;
        while(jake*3<=n ){
            jake *= 3;
            maxpower++;
        }
        long long count = n/jake;
        totalcoins += count*coinsFunction(maxpower);
           n = n - (jake*count);
        
        
    }
       

        cout<<totalcoins<<endl;


        
        
    }
    return 0;
}
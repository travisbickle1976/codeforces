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
    vector<long long> cost;
    long long c = 3;
    long long cnt = 1;
    for(int i=0;i<21;i++){
        cost.push_back(c);
        c = 3*c + cnt;
        cnt *= 3;
    }/// array method 
    while(t--){
        long long n,k;
        cin>>n>>k;
        
        long long totalcoins = 0;
       
        long long dealUsed = 0;
        while(n>0 && dealUsed < k ){
           
             long long maxpower = 0;
              long long jake = 1;
        while(jake*3<=n ){
            jake *= 3;
            maxpower++;
        }
        n = n - jake;

        totalcoins += coinsFunction(maxpower);
         dealUsed++;
        
        
    }
    if(n==0){
           cout<<totalcoins<<endl;
    }
    else{
        cout<<-1<<"\n"
    }
       

     


        
        
    }
    return 0;
}
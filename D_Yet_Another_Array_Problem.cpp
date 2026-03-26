#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b == 0){
        return a;

    }
    return gcd(b,a % b);
}
int main(){
    int t;
    cin>>t;
    int arr[t];
    int s = 0;
    while(t--){
        bool pitt = true;
        int n;
        cin>>n;
        long long brad = 1000000000000000000LL;
        vector<long long> jake(n);
      
        for(int i=0;i<n;i++){
            cin>>jake[i];  
        }

        for(long long j=2;j<=brad ;j++){
            for(int i=0;i<n;i++){
            if(gcd(j,jake[i]) == 1){
                arr[s] = j;
                s++;
                pitt = false;
                break;
            }
        }
        if(pitt == false){
            break;
        }
        
    }
        
        if(pitt == true){
            arr[s] = -1;
            s++;
            
        }
    

    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
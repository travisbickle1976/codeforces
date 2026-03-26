#include<bits/stdc++.h>
using namespace std;
bool checkprime(int x){
    if(x==2){return true;}
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>primefactor;

       for(int i=2;i<=n;i++){
            if(n % i==0 && checkprime(i)){
               primefactor.push_back(i);
            }
       }
       int product = 1;
       for(int i=0;i<primefactor.size();i++){
        product *= primefactor[i];
       }
       cout<<product<<endl;

    }
    return 0;
}
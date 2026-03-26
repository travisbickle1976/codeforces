#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n ){
    int sum = 0;
    while(n>0){
    int digit = n%10;
    sum += digit;
    n = n / 10;
}
return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        for(int y=n;y<n+91;y++){
            int digitsum = sumOfDigits(y);
            if(y-digitsum == n){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

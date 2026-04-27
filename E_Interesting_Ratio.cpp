#include<bits/stdc++.h>
using namespace std;
const int N = 1e7;
bool prime[N+1];
vector<int>primes;
 
void solve(){
    int n;
    cin>>n;
 
    
 
    long long ans = 0;
    for(int i=0;i<primes.size() && primes[i]<= n ;i++){
        ans += n/primes[i];
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
 for(int i=0;i<=N;i++){
        prime[i] = true;
    }
    for(int i=2;i<=N;i++){
        if(prime[i]){
            primes.push_back(i);
            for( int j=2;i*j<=N;j++){
                prime[i*j]=false;
            }
        }
 
    }
    while(t--){
     solve();
 
    }
 
}
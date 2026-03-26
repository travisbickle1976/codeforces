#include<bits/stdc++.h>
using namespace std;
long long number(string &str,char ch){
   int n = str.size();
   vector<int>posOfCh;
   for(int i=0;i<n;i++){
    if(str[i] == ch){
        posOfCh.push_back(i);
    }
        }
    int m = posOfCh.size();
    if(m==0){
        return 0;
    }
    vector<long long>b(m);
    for(long long i=0;i<m;i++){
        b[i] = posOfCh[i]-i;
    }
    sort(b.begin(),b.end());
    long long median = b[m/2];
    long long totalSwap = 0;
    for(int i=0;i<m;i++){
        totalSwap += llabs(b[i]-median);
    }

   
   
   return totalSwap;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        long long ans;
        
            ans = min(number(str,'a'),number(str,'b'));
        
         cout<<ans<<endl;
    }
    
    return 0;
}
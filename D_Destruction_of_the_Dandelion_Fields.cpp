#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
   
   
    vector<int>odd;
    long long sum = 0;

    for(int i=0;i<n;i++){
        long long x ;

        cin>>x;
        if(x % 2==0){
            sum += x;
        }
        else{
           odd.push_back(x);
        }

    }
    
    sort(odd.begin(),odd.end(),greater<int>());
    if(odd.size() == 0){
        cout<<0<<endl;
        return ;
    }
    if(odd.size()==1){
        cout<<sum+odd[0]<<endl;
        return ;
    }
    
    int left = 0;
    int right = odd.size()-1;
    while( left<=right){
        sum += odd[left];
        left++;
        right--;
    }
cout<<sum<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
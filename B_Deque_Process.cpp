#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    string ans = "";
    bool jake = true;
    int left = 0;
    int right = n-1;
    // they said that ai is the distinct
    while(left<=right){
        if(left == right){
            ans += "L";
            break;
        }
        if(a[left]<a[right]){
            left++;
            ans += "L";
        }
        else{
            right--;
            ans += "R";
        }
        if(left == right){
            ans += "L";
            break;
        }
        if(a[left]>a[right]){
            ans += "L";
            ans += 'R';
        }
        else if(a[left] < a[right]){
            ans+= "R";
            ans += "L";
        }
        left++;
        right--;
        

    }
    cout<<ans<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
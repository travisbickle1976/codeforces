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
    while(left<=right){
        if(jake){
            if(a[left]<a[right]){
                left++;
                ans+="L";
            }
            else{
                right--;
                ans+="R";
            }
        }
        else{
            if(a[left]>a[right]){
                left++;
                ans+="L";
            }
            else{
                right--;
                ans+="R";
            }
        }
        jake = false;
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
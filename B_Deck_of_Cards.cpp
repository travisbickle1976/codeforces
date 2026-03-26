#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans(n,'+');
  int a = count(s.begin(),s.end(),'0');
  int b = count(s.begin(),s.end(),'1');
  int c = count(s.begin(),s.end(),'2');
  if(k==n){
    while(n--){
        cout<<"-";
    }
    cout<<endl;
    return;
  }
  int left = 0;
  while(a--){
    ans[left]='-';
    left++;
  }
  int right = n-1;
  while(b--){
    ans[right]='-';
    right--;
  }
  while(c--){
    ans[left]='?';
    ans[right]='?';
    left++;
    right--;
  }
for(auto ch : ans){
    cout<<ch;
}
   
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

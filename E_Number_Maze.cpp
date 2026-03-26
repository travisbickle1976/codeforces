#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    vector<string>comb = {"12","123","1234"};
    map<int,vector<string>>mp;
    for(auto& it:comb){
        string s = it;
        // sort(s.begin(),s.end());
        vector<string>ar;
        do{
            ar.push_back(s);

        }while(next_permutation(s.begin(),s.end()));
        mp[stoi(it)]=ar;
    }




    int n,p1,p2;
    cin>>n>>p1>>p2;
    auto&it = mp[n];
    int c2 = 0;

    
    string x = it[p1-1] , y = it[p2-1];
    int sz = x.size();
    for(int i=0;i<sz;i++){
        if(x[i]==y[i])c2++;
    }
    int c1 = sz-c2;
    cout<<c2<<"A"<<c1<<"B"<<endl;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
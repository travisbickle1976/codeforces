#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n,m;
        cin>>n>>m;
        string str(n);
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        vector<int>ans(n);
        int p = n;
        int position = 0;
        while(p--){
            unordered_map<char,int>hash;
            
            for(int i=0;i<n;i++){
                if(i != position){
                    for(auto it : str[i]){
                        hash[it]++;
                    }
                    
                }
            }
            unordered_map<char,int>jake;
            for(auto it:str[position]){
                jake[it]++;
            }

        }

    
    return 0;
}
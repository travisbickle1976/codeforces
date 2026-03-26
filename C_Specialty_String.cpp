#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        
        while(true){
            string result = "";
            for(int i=0;i<str.size();i++){
                if(i+1<str.size()&& str[i]==str[i+1]){
                    i++;
                }
                else{
                    result += str[i];
                }
            }
            if(str == result){
                break;
            }
            else{
                str = result;
            }
        }
        if(!str.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
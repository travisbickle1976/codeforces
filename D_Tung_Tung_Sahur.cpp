#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        cin>>t;
        string str = "YES";
        int i = 0;
        int j = 0;
     
        while(i<s.size() || j < t.size()){
                 bool ok = false;
            int count1 = 1;
            int count2 = 1;
            if(s[i]!=t[j]){
                str = "NO";
                break;
            }
          
            while( i+1< s.size() && s[i] == s[i+1]){
                count1++;
                i++;
            }
             while(  j+1< t.size() && t[j] == t[j+1]){
                count2++;
                j++;
            }
            if(count2 <= 2*count1 && count2 >= count1){
                ok = true;
            }
            if(!ok){
                str = "NO";
                break;
            }
            i++;
            j++;
        }
        cout<<str<<endl;
    }
    return 0;
}
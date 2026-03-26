#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string jake;
        cin>>jake;
        string genel;
        cin>>genel;
        
        int index = 0;
       
        for(int i=0;i<jake.size();i++){
            
            for(int j=0;j<genel.size();j++){
                if(jake[i] == genel[j]){
                  genel.erase(j,1);
                   
                    break;
                }
            }
          
        }
      
   sort(genel.begin(),genel.end());
   
    int first = 0;
    int second = 0;
    while(first<jake.size()){
        if(  second < genel.size()&&jake[first] > genel[second]){
            second++;
        }
        
        else{
             genel.insert(second,1,jake[first]);
              first++;
                second++;

        }


    }
     bool black = true;
        for(int i=0;i<jake.size();i++){
            
            for(int j=0;j<genel.size();j++){
                if(jake[i] == genel[j]){
                  genel.erase(j,1);
                    black = false;
                    break;
                }
            }
            if(black == true){
                break;
            }
        }

if(black == true){
     cout<<"Impossible\n";
       }
        else{
           
             cout<<genel<<"\n";
    
        }
}
    return 0;
}
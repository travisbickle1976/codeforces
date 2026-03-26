#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         vector<int> ajisai;
        vector<int> mai;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ajisai.push_back(x);
        }
         for(int i=0;i<n;i++){
            int y;
            cin>>y;
            mai.push_back(y);
        }
       int xor1 = 0;
       int xor2 = 0;
    xor1 = accumulate(ajisai.begin(),ajisai.end(),0,bit_xor<int>());
         xor2 = accumulate(mai.begin(),mai.end(),0,bit_xor<int>());
   
    
   
    int i = 0;
    int jake = 1;
    while(jake<=n  ){
        if(jake % 2 == 1){
            if(xor1 > xor2){
                jake++;
                i++;
            continue;
                }
            else{
                xor1 = xor1 ^ ajisai[i] ^ mai[i];
                    xor2 = xor2 ^ ajisai[i] ^ mai[i];
                swap(mai[i],ajisai[i]);
                 jake++;
                i++;
            

         }


        }
        else{
            if(xor2 > xor1){
                  jake++;
                i++;
                continue;
               
            }
            else{
                xor1 = xor1 ^ ajisai[i] ^ mai[i];
                    xor2 = xor2 ^ ajisai[i] ^ mai[i];
                    swap(ajisai[i],mai[i]);
                     jake++;
                i++;
                
            }
        }
      
      
      
       
        
       
      
    }
    if(xor1 > xor2){
        cout<<"Ajisai\n";
    }
    else if(xor1 < xor2){
        cout<<"Mai\n";
    }
    else{
        cout<<"Tie\n";
    }
    
        
    }

    
    return 0;
}
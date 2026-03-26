 #include<iostream>
 using namespace std;
 int main(){
    int n,k;
    cin>>n>>k;
    int jake[n];
    for(int i=0;i<n;i++){
        cin>>jake[i];
    }
    int cutof = jake[k-1]; 
    int count = 0;
  
    for(int i=0;i<n;i++){
        if(jake[i]>=cutof && jake[i] != 0){
            count++;
        }
    
    }
    
        cout<<count;
       
    return 0;
 }
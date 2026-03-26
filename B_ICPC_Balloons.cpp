#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    string str[n];
    for(int i=0;i<n;i++){
        int jake[27] = {0};
        int sum = 0;
        int k;

        cin>>k;
         
        cin>>str[i];
        for(int j=0;j<k;j++){
            int index = str[i][j]-65;
            if(jake[index] == 0){
                jake[index] = 2; 
            }
            else{
                jake[index] += 1;
            }
        }
        for(int p=0;p<27;p++){
            sum += jake[p];
        }
        arr[i] = sum;


    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

   

    return 0;
}
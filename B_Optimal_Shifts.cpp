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
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            if(str[i] == '1'){
                arr[i] = 1;
            }
        }
        int left = 0;
        int right = 0;
        int sum = 0;
        int len = 0;
        int maxLen = 0;
        while(right<n){
            sum += arr[right++];
            
            if(sum > 0){
                while(left <= right && sum > 0){
                    sum -= arr[left++];
                    
                }
            }
            else{
                len = right-left;
                maxLen = max(maxLen,len); 
            }

        }
        int l = 0;
        int r = n-1;
        int count1 = 0;
        int count2 = 0;

            while(arr[l]==0){
                count1++;
                l++;
            }
            while(arr[r]==0){
                count2++;
                r--;
            }
        
        if(count1 != 0 && count2 != 0){
            int black = (count1+count2);
            maxLen = max(maxLen,black);
        }
       

        

         
       cout<<maxLen<<endl;

       

        
       
    }

    return 0;
}

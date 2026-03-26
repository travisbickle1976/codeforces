 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        int k = str[i].length();
        if(k > 10 ){
            cout<<str[i][0]<<k-2<<str[i][k-1]<<"\n";
        }
        else{
            cout<<str[i]<<endl;
        }
    }

    return 0;
 }
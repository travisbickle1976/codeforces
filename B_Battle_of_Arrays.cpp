 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    
    while(t--){
        long long n,m;
        cin>>n>>m;
        priority_queue<long long>arr,brr;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            arr.push(x);
        }
        for(int i=0;i<m;i++){
            int y;
            cin>>y;
            brr.push(y);
        }
        bool aliceTurn = true;
        while(!arr.empty() && !brr.empty()){
            if(aliceTurn){
                long long a = arr.top();
                long long b = brr.top();
                brr.pop();
                if(b>a){
                    brr.push(b-a);
                }
            }
            else{
                long long a = arr.top();
                long long b = brr.top();
                arr.pop();
                if(a>b){
                    arr.push(a-b);
                }}
                aliceTurn = !aliceTurn;
            
            }
        if(brr.empty()){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
 }

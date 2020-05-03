#include <bits/stdc++.h>
using namespace std;
int main(){
int testcase=0;
cin>>testcase;
for(int v=0;v<testcase;v++){
    int n=0,k=0,sum1=0,sum=0;
    cin>>n>>k;
    bool boolean1=true;
    int array[n]={0};
    for(int j=0;j<n;j++){
        cin>>array[j];
    }
    for(int d=0;d<k;d++){
        sum1+=array[d];
    }
    //cout<<sum1<<' ';
    for(int i=0;i+k<n+1;i++){
        sum=0;
        for(int j=i;j<i+k;j++){
            sum+=array[j];
            
        }
        //cout<<sum<<' ';
        if(sum1!=sum)
        {boolean1=false;
        break;}
    }
    if(boolean1==true){
        cout<<n<<'\n';
        for(int j=0;j<n;j++)
        {
            cout<<array[j]<<' ';
        }
        cout<<'\n';
    }
    else{
    
    set <int> s;
    for(int j=0;j<n;j++){
        s.insert(array[j]);
    }
    if(s.size()>k)
    cout<<"-1"<<'\n';
    else if(s.size()<k){
         cout<<n*k<<'\n';
        for(int x=1;s.size()<k;x++)
        {
            s.insert(x);
        }
        for(int p=0;p<n;p++){
        
        for(auto p:s){
            
            cout<<p<<' ';
            
        }
    }
    cout<<'\n';
    }
    else{cout<<n*k<<'\n';
    for(int p=0;p<n;p++){
        
        for(auto p:s){
            
            cout<<p<<' ';
            
        }
    }
        cout<<'\n';
    }
    
    
    
}
    
}
    
    
    
    
    
return 0;
}
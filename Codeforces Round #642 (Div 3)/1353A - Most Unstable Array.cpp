#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcase=0;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int n=0;
        int m=0;
        cin>>n>>m;
        if(n==1){
            cout<<"0"<<"\n";
        }
        else if(n==2){
            cout<<m<<"\n";
        }
        else
        cout<<2*m<<"\n";
    }
    
    
    
    
    
    return 0;
}

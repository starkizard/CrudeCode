#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcase=0;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {   int n=0;
        cin>>n;
        long difference=0;
        difference=(2*(pow(2,n)-1))- 2*( 2*(pow(2,((n/2)-1))-1) + pow(2,n));
    
        cout<<abs(difference)<<'\n';    
    }
    
    
    
    return 0;
}
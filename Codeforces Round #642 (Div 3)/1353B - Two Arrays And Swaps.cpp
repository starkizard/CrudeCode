#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcase=0;
    cin>>testcase;
    for(int p=0;p<testcase;p++){
       int n=0,k=0;
       cin>>n>>k;
       int array1[n]={0};
       int array2[n]={0};
       int sum1=0,sum2=0;
       for(int i=0;i<n;i++){
           cin>>array1[i];
           sum1+=array1[i];
       }
       for(int i=0;i<n;i++){
           cin>>array2[i];
           sum2+=array2[i];
       }
       sort(array1,array1+n);
       sort(array2,array2+n);
       int x=n;
       int y=0;
       bool s=true;
       while(k!=0 && s==true){
           if(array2[x-1]>array1[y])
           {
            sum1+=array2[x-1]-array1[y];  
           }
           else
           {
               s=false;
           }
           x--;
           y++;
           k--;
       }
       
       cout<<sum1<<"\n";
       
       
    }
    
    
    
    
    
    return 0;
}

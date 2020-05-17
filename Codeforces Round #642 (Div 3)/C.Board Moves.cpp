#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcase=0;
    cin>>testcase;
   // long double array[1000000]={0};


   // cout<<array[2]<<' '<<array[3]<<" "<<array[5]<<array[6]<<" "<<array[7];
    for(int p=0;p<testcase;p++){
       int n=0;
       cin>>n;
     long long int y=0;

    for(long long int i=1,j=1;i<n;i+=2,j+=1){
    y+=((((2*i)+2)*2)*j);
    }
     cout<<y<<"\n";


    }





    return 0;
}

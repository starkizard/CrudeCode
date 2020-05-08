#include <bits/stdc++.h>
using namespace std;

int main() {
   int n=0,m=0;
   cin>>n>>m;
   long long time=0;
   int array[m]={0};
   for(int i=0;i<m;i++){
       cin>>array[i];
       
   }
   for(int l=0;l<m-1;l++){
       if(array[l]<=array[l+1] )
       time+= array[l+1]-array[l];
       else
       time+=(n-array[l])+array[l+1];
   }
    cout<<time+array[0]-1<<'\n';

	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],max=0,min,maxindex,minindex,steps;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
            maxindex=i;
        }
    }
    min=max;
    for(int i=0;i<n;i++){
        if(a[i]<=min){
            min=a[i];
            minindex=i;
        }
    }


    if(maxindex>minindex){    steps= maxindex+((n-1)-minindex-1);
        cout<<steps;
    }else{
        steps= maxindex+(n-1-minindex);
        cout<<steps;
    }

}
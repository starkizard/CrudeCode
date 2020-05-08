#define MI_PI 3.1415926535897
#include <bits/stdc++.h>
using namespace std;
int main(){
    
        
    int n=0;
    cin>>n;
    double arrayX[n]={0},arrayY[n]={0},arrayDegree[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>arrayX[i]>>arrayY[i];
    }
    for(int i=0;i<n;i++){
        arrayDegree[i]=atan2(arrayY[i],arrayX[i])*180/MI_PI;
    }
    sort(arrayDegree,arrayDegree+n);
    arrayDegree[n]=arrayDegree[0]+360;
    double ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,arrayDegree[i+1]-arrayDegree[i]);
        
    }
    printf("%0.9lf",360-ans);
    
    
    
    return 0;
}

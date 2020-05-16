#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max,i=3;
    cout<<"enter a number: ";
    cin>>n;
        while(n%2==0)
        {
            max=n;
            n=n/2;
        }
        for(i=3;i<=sqrt(n);i=i+2)
        {
            while(n%i==0)
            {
                max=i;
                n=n/i;
            }
        }
        if(n>2)
        {
            cout<<n;
        }
else
{
    cout<<max;
}

    
    
}
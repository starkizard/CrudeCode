#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,r,d,max=0;
    for(int i=999;i>=100;i=i-1)
    {
        for(int j=999;j>=100;j=j-1)
        {
            c=i*j;
            d=i*j;
            int s=0;           
        
            while(c!=0)
        
            {
                r=c%10;
                s=s*10+r;
                c=c/10;
                
            }
            
            if(s==d)
            {if(d>max)
            {max=d;

            }
            }
        }
        
    }
    cout<<max<<"\n";
}
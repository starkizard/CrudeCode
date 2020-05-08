/**
 *    author:  joshi8
 *    created:
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int x,t;
    cin>>t;

    for(x=0;x<t;x++)
    {
        int n,i,j,k,inp;
        cin>>n;
        vector<int> a,dif;

        int m=0,count=0;

        for(i=0;i<n;i++)
        {
            cin>>inp;

            if(inp==1)
            {
                count++;
            }

            a.push_back(inp);
            if(inp==1)
            {
                if(count!=1)
                    dif.push_back(m);
                m=0;
            }

            m++;
        }

        count = 0;
        for(i=0;i<dif.size();i++)
        {
            if(dif[i]<6)
            {
                cout<<"NO"<<endl;
                count = 1;
                break;
            }

        }

        if(count==0)
        {
            cout<<"YES"<<endl;
        }


    }

    return 0;
}

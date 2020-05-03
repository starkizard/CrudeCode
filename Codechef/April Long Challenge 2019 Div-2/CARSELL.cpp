/**
 *    author:  joshi8
 *    created:
**/

#include <bits/stdc++.h>

#define M 1000000007

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long int t,x;

    cin>>t;
    for(x=0;x<t;x++)
    {
        long long int n,i,j,k,l,m;
        cin>>n;
        vector<int> p;

        for(i=0;i<n;i++)
        {
            cin>>m;
            p.push_back(m);
        }

        sort(p.begin(),p.end());

        long long int sum = 0;
        for(i=p.size()-1;i>=0;i--)
        {
            if(p[i]!=0)
                p[i] = p[i] + i - p.size() + 1;

            if(p[i]<0)
                p[i] = 0;

            // cout<<"   "<<p[i];
            sum = ((sum%M) + (p[i]%M))%M;
        }
        // cout<<"\n";
        cout<<sum%M<<endl;
    }

    return 0;
}

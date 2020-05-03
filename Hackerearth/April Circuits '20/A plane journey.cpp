/**
 *    author:  joshi8
 *    created:
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    unsigned long long int n,m,i,j,k,l,max1,max2,inp;
    cin>>n>>m;

    vector<unsigned long long int> a,b;

    for(i=0;i<n;i++)
    {
        cin>>inp;
        a.push_back(inp);
    }

    for(i=0;i<m;i++)
    {
        cin>>inp;
        b.push_back(inp);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<unsigned long long int> count;

    if(a[a.size()-1]<=b[b.size()-1])
    {
        unsigned long long int check=0;
        for(i=0;i<m;i++)
        {
            check=0;
            for(j=0;j<n;j++)
            {
                if(b[i]>=a[j])
                {
                    check++;
                }
                else
                    break;
            }
            count.push_back(check);
        }

        //long long int s = a.size();
        unsigned long long int hj = a.size();
        vector<unsigned long long int> kk;

        for(i=0;i<m;i++)
        {
            unsigned long long int avg = hj/(m-i);
            count[i] = count[i] - (a.size() - hj);
            if(count[i]<avg)
            {
                hj = hj - count[i];
                kk.push_back(count[i]);
            }
            else
            {
                hj = hj - avg;
                kk.push_back(avg);
            }
        }

        hj = *max_element(kk.begin(), kk.end());
        check = 0;
        if(hj>1)
        {
            hj = 1 + ((hj-1)*2);
        }

        cout<<hj;
        //cout<<kk[kk.size()-1];
    }
    else
        cout<<-1;

    return 0;
}
Language: C++14

/**
 *    author:  joshi8
 *    created:
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long int x,t;
    cin>>t;
    for(x=0;x<t;x++)
    {
        // cout<<"here";
        long int n,m,i,j,k,l,count=1;
        char c;
        string s;
        vector<int> bin1,temp,fell;

        // cout<<"here";
        cin>>n>>m>>s;
        //cout<<"here";
        k = n;
        while(k!=1)
        {
            //cout<<k<<endl;
            l = k%2;
            bin1.push_back(l);
            k = k/2;
            count++;
        }
        //cout<<k<<endl;
        //cout<<"here";
        bin1.push_back(k);
        while(count<16)
        {
            bin1.push_back(0);
            count++;
        }
        //reverse(bin1.begin(),bin1.end());
        //cout<<"here";

        // cout<<endl;
        // for(i=0;i<bin1.size();i++)
        // {
        //     cout<<bin1[i];
        // }

        // cout<<s[0]<<endl;



        if(s[0]=='L')
        {
            for(i=15;i>15-m;i--)
            {
                temp.push_back(bin1[i]);
            }

            for(i=15-m;i>=0;i--)
            {
                bin1[i+m]=bin1[i];
            }

            for(i=m-1;i>=0;i--)
            {
                bin1[i] = temp[m-1-i];
            }
        }
        else
        if(s[0]=='R')
        {
            for(i=m-1;i>=0;i--)
            {
                temp.push_back(bin1[i]);
            }

            for(i=m;i<=15;i++)
            {
                bin1[i-m]=bin1[i];
            }

            for(i=15;i>15-m;i--)
            {
                bin1[i] = temp[15-i];
            }
        }

        long int number=0;

        for(i=0;i<bin1.size();i++)
        {
            number = number + (bin1[i]*pow(2,i));
        }

        cout<<number<<endl;
    }

    return 0;
}
Language: C++14

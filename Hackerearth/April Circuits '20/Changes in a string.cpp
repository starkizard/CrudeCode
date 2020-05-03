/**
 *    author:  joshi8
 *    created:
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long int x,t;
    cin>>t;
    for(x=0;x<t;x++)
    {
        long long int i,j,k,l,m,n,count=0,counta=0,countb=0,a,b,min;
        char start;
        vector <long long int> freq;
        string s;
        cin>>n>>s;

        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                start = s[0];
                count++;
            }
            else
            if(s[i]==s[i-1])
            {
                count++;
            }
            else
            if(s[i]!=s[i-1])
            {
                freq.push_back(count);
                count=1;
            }

            if(s[i]=='A')
                counta++;
            else
                countb++;
        }
        freq.push_back(count);

        /*for(i=0;i<freq.size();i++)
        {
            if(start=='A')
            {
                if(i%2==0)
                    counta+=freq[i];
                else
                    countb+=freq[i];
            }
            else
            {
                if(i%2==0)
                    countb+=freq[i];
                else
                    counta+=freq[i];
            }
        }*/

        a = 0;
        b = countb;
        min = counta;

        if(countb<min)
            min = countb;

        for(i=freq.size()-1;i>=0;i--)
        {
            if(start=='A')
            {
                if(i%2!=0)
                {
                    b = b - freq[i];
                }
                else
                {
                    a = a + freq[i];
                }

                if(a+b<min)
                {
                    min = a+b;
                }
            }
            else
            {
                if(i%2==0)
                {
                    b = b - freq[i];
                }
                else
                {
                    a = a + freq[i];
                }

                if(a+b<min)
                {
                    min = a+b;
                }
            }
        }

        if(counta==0 || countb==0)
            cout<<0<<endl;
        else
            cout<<min<<endl;
    }

    return 0;
}
Language: C++14

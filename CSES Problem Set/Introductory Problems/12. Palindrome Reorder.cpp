/****************************
*  Developer : joshi08
*  Date  :  22-06-2020
*  Year  :  2020
****************************/

#include <bits/stdc++.h>

#define lli long long int
#define mod 1000000007
#define fi first
#define se second
#define ii pair<lli, lli>
#define mp make_pair
#define endl '\n'
const double PI = 3.141592653589793238460;
lli gcd(lli a, lli b) { if (a == 0) return b; return gcd(b % a, a);}
lli max(lli a, lli b) {if (a > b) return a; else return b;}
lli min(lli a, lli b) {if (a < b) return a; else return b;}
lli power(lli a,lli b) {lli i,p=1; for(i=0;i<b;i++){p*=a;} return p;}

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	string s;
	cin>>s;
	lli i,j=0,k=0,n,check=0,m,p;
	
	n = s.size();
	lli hash[27]={0};
	
	for(i=0;i<n;i++)
	{
		hash[s[i] - 'A']++;
	}
	
	for(i=0;i<27;i++)
	{
		if(hash[i]%2!=0 && check==1)
			break;
			
		if(hash[i]%2!=0 && check==0)
			check=1;
	}
	if(i!=27)
		cout<<"NO SOLUTION";
	else
	{
		//string sn = s;
		
		for(i=0;i<27;i++)
		{
			if(hash[i]!=0)
			{
				if(hash[i]==1)
				{
					s[n/2] = (char)(i+65);
				}
				else
				if(hash[i]%2!=0)
				{
					s[n/2] = (char)(i+65);
					hash[i]--;
					m = n/2;
					for(p=1;p<=hash[i]/2;p++)
					{
						s[m-p] = (char)(i+65);
					}
					for(p=1;p<=hash[i]/2;p++)
					{
						s[m+p] = (char)(i+65);
					}
				}
				else
				{
					for(k=0;k<hash[i]/2;k++)
					{
						s[j] = (char)(i+65);
						s[n-1-j] = (char)(i+65);
						j++;
					}
				}
			}
		}
		cout<<s;
	}

    return 0;
}


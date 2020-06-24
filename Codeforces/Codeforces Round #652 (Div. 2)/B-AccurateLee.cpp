//# auth: joshi08
//# In the string input it can be observed that for every group of  one  and zero such that ones are behind zero, it vanishes to one or zero.
//# So approach is to make a pair of vectors(pil) and store group of 1 and 0. Such as zero 8 times and one 4 times is stored as ({0,8}, {1,4}).
//# For every group of 1's if there are 0's ahead of it we make number of 1's as 0. And if there are zeroes again in the string we make 0's also zero otherwise make 0's as 1.
//# This works because after computation there can only be 1's at rightmost and 0's at leftmost. So if cancelling 1 and 0 groups give us a 0 then it will be only one from the whole string.
//# Now compute new string as the frequency in pil.


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
lli power(lli a, lli n){ lli res = 1; while(n){ if(n%2==0){ a *= a; n /= 2; } else{ res *= a; n--; } } return res; }

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	lli t;
	cin>>t;
	while(t--)
	{
		lli n,i,j,k,m,p,cnt=0;
		cin>>n;
		string s,sn;
		cin>>s;
		vector<ii> pil;
		for(i=0;i<s.size();i++)
		{
			if(i==0)
				cnt++;
			else
			{
				if(s[i]!=s[i-1])
				{
					p = s[i-1]-'0';
					pil.push_back({p,cnt});
					cnt=1;
				}
				else
				{
					cnt++;
				}
			}
		}
		p = s[i-1]-'0';
		pil.push_back({p,cnt});
		
		
		for(i=0;i<pil.size();i++)
		{
			if(pil[i].first==1 && i+1<pil.size())
			{
				pil[i].second=0;
				if(i+3<pil.size())
					pil[i+1].second=0;
				else
					pil[i+1].second=1;
			}
		}
		for(i=0;i<pil.size();i++)
		{
			if(pil[i].first==0)
			{
				for(j=0;j<pil[i].second;j++)
				{
					sn += '0';
				}
			}
			else
			{
				for(j=0;j<pil[i].second;j++)
				{
					sn += '1';
				}
			}
		}
		cout<<sn<<endl;
	}

    return 0;
}


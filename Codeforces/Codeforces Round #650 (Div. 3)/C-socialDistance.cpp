//# auth: joshi08
//# First make an array to store number of zeroes in a group ( 0001000 so array will be {3,3} )
//# Now mark the hashing of string in reverse order that is hash[ last element ] = 0;
//# Now, iterating from first in string, count the number of zeroes to skip and use hash[] to predict number of zeroes after the element
//# Note: take care of 1st element as it can be empty.
//# Print number of times you insert 1 into string.



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

	lli t;
	cin>>t;
	while(t--)
	{
		
		lli n,k,i,p=0,cnt=0,count=0;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<lli> a;
		lli hash[n]={0};
		for(i=0;i<n;i++)
		{
			if(s[i]=='0')
				p++;
			else
			{
				a.push_back(p);
				p=0;
			}
			
			if(i==n-1)
				a.push_back(p);
		}
		
		for(i=n-1;i>=0;i--)
		{
			if(s[i]=='0')
			{
				cnt++;
			}
			else
			{
				cnt=0;
			}
			hash[i]=cnt;
		}
		
		
		for(i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				cnt++;
			}
			else
			{
				cnt=0;
			}
			if(s[i]=='0' && (cnt>k || i==0) && (hash[i]>=k+1 || i+hash[i]-1>=n-1) )
			{
				cnt=0;
				s[i]='1';
				count++;
			}
		}
		
		cout<<count<<endl;
	}

    return 0;
}


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

	lli n,i;
	cin>>n;
	
	if(n==1 || n==2)
	{
		cout<<"NO";
	}
	else
	if(n%2==0)
	{
		if((n/2)%2==0)
		{
			cout<<"YES"<<endl;
			cout<<n/2<<endl;
			for(i=1;i<=n/4;i++)
			{
				cout<<i<<" ";
			}
			for(i=(n/4) - 1;i>=0;i--)
			{
				cout<<n-i<<" ";
			}
			cout<<endl<<n/2<<endl;
			for(i=(n/4) + 1; i<=n-(n/4);i++)
			{
				cout<<i<<" ";
			}
		}
		else
		{
			cout<<"NO";
		}
	}
	else
	{
		if((n-3)%4==0)
		{
			cout<<"YES"<<endl;
			cout<<(n-3)/2 + 2<<endl;
			cout<<1<<" "<<2<<" ";
			//i = 4;
			for(i=0;i<(n-3)/4;i++)
			{
				cout<<4+i<<" ";
			}
			for(i=((n-3)/4) - 1;i>=0;i--)
			{
				cout<<n-i<<" ";
			}
			cout<<endl;
			cout<<(n-3)/2 + 1<<endl;
			cout<<3<<" ";
			for(i=(n-3)/4;i< (n-3)/4 + (n-3)/2;i++)
			{
				cout<<4+i<<" ";
			}
		}
		else
		{
			cout<<"NO";
		}
	}

    return 0;
}


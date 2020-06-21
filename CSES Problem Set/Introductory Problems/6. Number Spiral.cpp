/****************************
*  Developer : joshi08
*  Date  :  20-06-2020
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

	lli t;
	cin>>t;
	while(t--)
	{
		lli x,y;
		cin>>x>>y;
		
		if(x>y)
		{
			if(x%2!=0)
			{
				cout<<((x-1)*(x-1)) + y;
			}
			else
			{
				cout<<(x*x) - y + 1;
			}
		}
		else
		{
			if(y%2!=0)
			{
				cout<<(y*y) - x + 1;
			}
			else
			{
				cout<<((y-1)*(y-1)) + x ;
			}
		}
		cout<<endl;
	}

    return 0;
}


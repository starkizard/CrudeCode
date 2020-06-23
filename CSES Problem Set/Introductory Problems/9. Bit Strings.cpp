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
lli power(lli a, lli n)
{
	lli res = 1;
	while(n)
	{
		if(n%2==0)
		{
			a = (a*a)%mod;
			n = n/2;
		}
		else
		{
			res = (res * a)%mod;
			n--;
		}
	}
	return res;
}

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	lli n;
	cin>>n;
	cout<<power(2,n);

    return 0;
}


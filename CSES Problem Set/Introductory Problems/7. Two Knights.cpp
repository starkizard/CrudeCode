/****************************
*  Developer : joshi08
*  Date  :  21-06-2020
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

	lli t,i,n,d,m;
	
	cin>>t;
	
	for(n=1;n<=t;n++)
	{
		if(n==1 || n==2)
			d=0;
		else
		if(n==3)
		{
			d = 16;
		}
		else
		if(n==4)
		{
			d = 8+24+16;
		}
		else
		{
			d = 8+24+ ((n-4)*4*4) + 12 + ((n-4)*4*6) + ((n-4)*(n-4)*8);
		}
		
		m = ((n*n)*((n*n)-1));
		m = m - d;
		m = m/2;
		
		if(n<5)
		cout<<m<<endl;
		else
		cout<<m-2<<endl;
	}
	

    return 0;
}


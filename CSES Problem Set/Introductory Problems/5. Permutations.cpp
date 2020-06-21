/****************************
*  Developer : joshi08
*  Date  :  18-06-2020
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

	lli n,i,k=1;
	cin>>n;
	vector<lli> a(n,0);
	
	if(n>=4 || n==1)
	{
		for(i=n-2;i>=0;i-=2)
		{
			a[i] = k;
			k++;
		}
		
		for(i=n-1;i>=0;i-=2)
		{
			a[i] = k;
			k++;
		}
		
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
		cout<<"NO SOLUTION";
	}

    return 0;
}


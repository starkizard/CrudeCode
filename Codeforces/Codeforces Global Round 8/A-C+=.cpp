//# auth: joshi08
//# Brute force approach for the question.
//# Till a and b is less than input increase the smaller number with the larger.

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
		lli a,b,i,j,n,cnt=0;
		cin>>a>>b>>n;
		
		while(a<=n && b<=n)
		{
			if(a<b)
			{
				a += b;
			}
			else
			{
				b += a;
			}
			
			cnt++;
		}
		cout<<cnt<<endl;
	}

    return 0;
}


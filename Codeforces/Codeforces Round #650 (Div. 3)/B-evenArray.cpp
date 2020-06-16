//# auth: joshi08
//# calculate the number of odd numbers
//# if they're not equal to n/2 it's impossible (check cases, cannot be paired)
//# else just count the number of odds that aren't in correct position.
//# there'll be equal number of evens that are not in position hence.
//# so the number of mismatches is the answer

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
		lli n,i,j,k,m=0,odd=0;
		vector<lli> a;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>k;
			if(k%2!=0)
				odd++;
			if(k%2!=i%2)
				m++;
			a.push_back(k);
		}
		if(n%2!=0)
		{
			if(odd==n/2 && m%2==0)
				cout<<m/2<<endl;
			else
				cout<<-1<<endl;
		}
		else
		{
			if(odd==n/2 && m%2==0)
				cout<<m/2<<endl;
			else
				cout<<-1<<endl;
		}
	}

    return 0;
}


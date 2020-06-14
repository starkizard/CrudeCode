//# auth: joshi08
//# Just needed to print local maxima and local minima

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
		lli n,i,j,m,k;
		cin>>n;
		vector<lli> a,q;
		for(i=0;i<n;i++)
		{
			cin>>k;
			a.push_back(k);
		}
		q = a;
		a.clear();
		
		for(i=0;i<n-1;i++)
		{
			if(q[i]!=q[i+1])
			{
				a.push_back(q[i]);
			}
		}
		a.push_back(q[i]);
		
		q.clear();
		
		q.push_back(a[0]);
		for(i=1;i<n-1;i++)
		{
			if( ( a[i-1]>a[i] && a[i]<a[i+1] ) || (a[i-1]<a[i] && a[i]>a[i+1]) )
			{
				q.push_back(a[i]);
			}
		}
		q.push_back(a[n-1]);
		
		cout<<q.size()<<endl;
		for(i=0;i<q.size();i++)
		{
			cout<<q[i]<<" ";
		}
		cout<<endl;
	}

    return 0;
}


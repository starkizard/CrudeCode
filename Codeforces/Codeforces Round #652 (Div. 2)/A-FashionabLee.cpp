//# auth: joshi08
//# It can be easily noticed the polygons with sides multiple of 4 satisfies the condition.

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
		lli n;
		cin>>n;
		if(n%4==0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}

    return 0;
}


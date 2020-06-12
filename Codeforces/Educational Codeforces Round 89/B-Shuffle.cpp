//# So, we're given x, every query from then will make the whole range equal to 1 if it has x or any other 1 in the range
//# Now we created index pointer (p and q) so that we can keep track of the 1's
//# As we take input l and r from the user,we check whether part of (l,r) coincides with (p,q)
//# If it does coincide then we make our new pointer as minimum of (l,p) and maximum of (r,q)
//# At the end of the loop print the number of terms between p and q.


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
		
		lli n,x,m,i,j,k,l,r,p,q;
		
		cin>>n>>x>>m;
		
		p=x;
		
		q=x;
		
		for(i=0;i<m;i++)
		{
			
			cin>>l>>r;
			
			if((p<=r && p>=l) || (q>=l && q<=r) || (p<l && q>r))
			
			{
				p = min(p,l);
				
				q = max(q,r);
			}
		}
		
		cout<<q-p+1<<endl;
		
	}

    return 0;
}


//# auth : joshi08
//# We need to find max subarray who's sum is not divisible by x.
//# if the whole arrays sum is not divisible by x then the whole array is the subarray
//# But otherwise we store indexes where array element is not divisible by x (vector pair c).
//# If number of indexes (g) is zero then output -1 as we cannot find a subarray.
//# But if number of indexes(g) is not zero then we output the maximum length of subarray (other than the last index of c) or (other than first index of c).

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
		lli n,x,i,j,s=0,p=0,k,cnt=0,max1=0,check=0,g=0,q,l1,l2,l3;
		cin>>n>>x;
		vector<lli> a;
		vector<ii> c;
		for(i=0;i<n;i++)
		{
			cin>>k;
			a.push_back(k%x);
			s += (k%x);
			if(k%x!=0)
			{
				check=1;
				c.push_back(mp(k%x,i));
				g += (k%x);
				g = g%x;
				q = i;
			}			
		}
		
		if(check==0)
		{
			cout<<-1<<endl;
		}
		else
		{
			if(g!=0)
			{
				cout<<n<<endl;
			}
			else
			{
				l1 = max( c[0].second , n-1-c[0].second );
				l2 = max( c[c.size()-1].second , n-1-c[c.size()-1].second );
				cout<<max(l1, l2)<<endl;
			}
		}
		
	}

    return 0;
}


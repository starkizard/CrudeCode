//# auth: joshi08
//# What we really need to find in the problem is maximum sum of individual max and min.
//# First max can be maximum only if the they are the maximum of integers.
//# So for every friend the max will be the maximum out there. We can assign maximum as last elements of sorted a.
//# But if a friend requires only 1 integer then his/her max and min will be same.
//# Now how to find mins.
//# To maximize min should be as large as possible.
//# It will be a must to utilize first minimum element.
//# Then after that we can have (current + maximum friend requirement - 1)th element as min where current is 1 in first case and updates like this.
//# Once we found min and max for every element, just add it to get the final answer.
 

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
		lli n,k,i,j,m,cnt=0,ans=0,max1,min1;
		cin>>n>>k;
		vector<ii> a,w;
		vector<vector<lli>> sumi(k);
		
		for(i=0;i<n;i++)
		{
			cin>>m;
			a.push_back({m,0});
		}
		sort(a.begin(),a.end());
		
		
		for(i=0;i<k;i++)
		{
			cin>>m;
			w.push_back({m,1});
		}
		sort(w.begin(),w.end());
		
		m=0;
		for(i=0;i<k;i++)
		{
			if(w[i].first==1)
			{
				max1 = a[n-1-i].first;
				min1 = a[n-1-i].first;
			}
			else
			{
				max1 = a[n-1-i].first;
				min1 = a[m].first;
				m += w[k - 1 - cnt].first-1;
				cnt++;
			}
			//cout<<min1<<" "<<max1<<endl;
			ans += max1 + min1;
		}
		cout<<ans<<endl;
	}

    return 0;
}


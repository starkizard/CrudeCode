//# We need to see the differences in indices and see which ones have the same difference. But, We'll do it efficiently.
//# First I store all the indexes in the respective indexes array. 
//# see, l1 and l2.
//# this is done in O(n)
//# then we see the difference in the indexes (mod n) because cyclic.
//# the we find out the frequency of the most frequent difference there. (not thard to see why that will be the amount of matches)
#include <bits/stdc++.h>

#define lli long long int
#define mod 1000000007
#define fi first
#define se second
#define ii pair<int, int>
#define mp make_pair
const double PI = 3.141592653589793238460;
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
lli max(lli a, lli b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}


using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	lli n,i,k,c=0,m=0;
	bool sorted=false;
	cin>>n;
	vector<lli> a,b;
	lli hash[200001]={0},dif[n+1]={0};
	for(i=0;i<n;i++)
	{
		cin>>k;
		a.push_back(k);
		hash[a[i]]=i;
	}
	for(i=0;i<n;i++)
	{
		cin>>k;
		b.push_back(k);
		if((hash[b[i]]-i)<0)
		{
			c = (hash[b[i]]-i) + n;
		}
		else
			c = (hash[b[i]]-i);
		dif[c]++;
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
			break;
	}
	
	if(i!=n)
	{
		for(i=0;i<n+1;i++)
		{
			if(dif[i]>m)
			{
				m = dif[i];
			}
		}
	}
	else
	{
		m = n;
	}
		
	cout<<m;
	
    return 0;
}

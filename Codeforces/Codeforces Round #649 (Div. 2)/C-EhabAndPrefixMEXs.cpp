//# auth: joshi08
//# Create a hash table and input array a, mark in hash table.
//# Observe as a[i]<=i hence we can say that whenever a[i]!=a[i-1], b[i] must be a[i-1]
//# For rest of the elements run a variable(say m) from 0 and increment it till you find an element not present in hash table, add that element to the new array (b) and include it in hash table.
//# Print the required array b.


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

	lli n,i,k,max1=0;
	cin>>n;
	vector<lli> a;
	lli hash[100001]={0};
	
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(i==n-1)
		hash[k]++;
		a.push_back(k);
		if(k>max1)
		{
			max1 = k;
		}
	}
	vector<lli> b(a.size(),-1);
	
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[i-1])
		{
			b[i] = a[i-1];
			hash[a[i-1]]++;
		}
	}
	
	lli m=0;
	for(i=0;i<n;i++)
	{
		while(hash[m]!=0)
		{
			m++;
			//cout<<"hh";
		}
		//cout<<"hh";
		if(b[i]==-1)
		{
			b[i] = m;
			hash[b[i]]++;
		}
	}
	
	
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	
	

    return 0;
}


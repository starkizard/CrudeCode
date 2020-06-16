//# auth: joshi08
//# First review geeksforgeeks or any other website for Sieve Algorithm
//# I put a small twist with sieve to store smallest factor as sfactor[]
//# Next observe from example that if gcd(d1+d2,a)==1 only when a has at least two prime factors.
//# Next till a divides smallest factor, divide it and get number it divides.
//# Now if that number is a itself then we will not have answer because it has only one prime.
//# But otherwise print answer as the number and a/number.


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


bool is_prime[10000001];
lli sfactor[10000001];

void sieve()
{
	lli maxN = 10000001,i,j;
	is_prime[0] = is_prime[1] = true;
	
	sfactor[0] = 0;
	sfactor[1] = 1;
	
	for(i=2;i*i<maxN;i++)
	{
		if(!is_prime[i])
		{
			sfactor[i] = i;
			if(i*i<maxN)
			for(j=i*i;j<maxN;j+=i)
			{
				is_prime[j] = true;
				sfactor[j] = i;
			}
		}
	}
}


int main()
{
    ios::sync_with_stdio(false);
	sieve();
	lli n,i,k;
	cin>>n;
	vector<lli> a,x,y;
	
	for(i=0;i<n;i++)
	{
		cin>>k;
		lli p=1,c=1,w=k;
		
		
		if(is_prime[k])
		{
			p = sfactor[k];
			while(k%p==0)
			{
				k/=p;
				c*=p;
			}
			p = c;
		}
		k=w;
		
		if(p==1 || p==k)
		{
			x.push_back(-1);
			y.push_back(-1);
		}
		else
		{
			x.push_back(p);
			y.push_back(k/p);
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<y[i]<<" ";
	}

    return 0;
}


/****************************
*  Developer : joshi08
*  Date  :  18-06-2020
*  Year  :  2020
****************************/

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
	vector<lli> hash(200001,0);
	for(i=0;i<n-1;i++)
	{
		cin>>k;
		hash[k]++;
		if(max1<k)
		{
			max1 = k;
		}
	}
	
	for(i=1;i<=max1;i++)
	{
		if(hash[i]==0)
			break;
	}
	cout<<i;

    return 0;
}


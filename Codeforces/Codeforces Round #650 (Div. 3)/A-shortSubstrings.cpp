//# auth: joshi08
//# every element except first and last element would appear twice.
//# so loop through, add the first element , and then from the second element skip in steps of 2 
//# also add the last element

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
		lli i,j,n,k;
		string s,sn;
		cin>>s;
		for(i=0;i<s.size();i++)
		{
			if(i==0 || i==s.size()-1)
			{
				sn += s[i];
			}
			else
			{
				sn += s[i];
				i++;
			}
		}
		cout<<sn<<endl;
	}

    return 0;
}


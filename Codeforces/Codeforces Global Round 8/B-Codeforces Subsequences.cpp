//# auth: joshi08
//# The given test case in problem is adding "es" in the end so intution can be to add combination of letters.
//# But instead if we break down to the letters then we can see that multiplying occurrence of each letter will give us number of "codeforces" made.
//# Hence I created vector a with size 10 (each representing character of "codeforces") and all elements 1.
//# Now first our count is 1 as codeforces can be made only one time if its letter are one time each.
//# Till count reaches n or greater, add a letter with minimum occurrence till that iteration and calculate ans as multiplication of occurrences.


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

	lli n,i,j,ans=1,min1,index;
	string s="codeforces";
	cin>>n;
	
	vector<lli> a(10,1);
	
	while(ans<n)
	{
		min1 = a[0];
		index = 0;
		
		for(i=1;i<10;i++)
		{
			if(a[i]<min1)
			{
				min1 = a[i];
				index = i;
			}
		}
		a[index]++;
		ans = 1;
		for(i=0;i<10;i++)
		{
			ans *= a[i];
		}
	}
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<a[i];j++)
		{
			cout<<s[i];
		}
	}
	cout<<endl;
	
	
    return 0;
}


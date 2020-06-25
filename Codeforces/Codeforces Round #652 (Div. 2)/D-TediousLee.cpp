//# auth: joshi08
//# First, I would suggest to make 6 levels of tree to observe.
//# Now, observe that in the 4th tree root is connected to 2nd tree in right and left and 3rd tree in center.
//# This pattern goes on but cautious.
//# Every 3rd tree, the number of claws will increase by one. Why?
//# Because you see in third tree 2nd and 1st tree are connected and (1st and 2nd) does not have any claw. So how come new claw added.
//# Notice how new claw is added.
//# we have to output number of claws that are not connected.
//# So it will be similar to fibonaci but will be current = (current-1) + 2*(current-1) and if it is 3X element then add 1.
 

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
    
    lli a,b,c,i;
    vector<lli> arr;
    a = 0;
	b = 0;
	for(i=1;i<=2000000;i++)
	{
		c = (2*a) + b;
		if(i%3==0)
		{
			c+=4;
		}
		c %= mod;
		a = b;
		b = c;
		arr.push_back(c);
	}

	lli t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		if(n==1 || n==2)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<arr[n-1]<<endl;
		}
	}

    return 0;
}


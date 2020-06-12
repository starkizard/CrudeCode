//# This can be done in O(1).
//# my approach, let's say n for the greater value and k for the lesser value
//# So we reduce the greater value by 2 and the lesser value by 1, until they become equal (they will if k doesn't run out)
//# how much do we need to reduce, let's form an inequality
//# n-2x=k-x
//# gives x=n-k
//# if k <n-k (that is , we will run out of the lesser items) , print k
//# else we do get n-k steps from these opertions so we add it.
//# now we'll get both our n and k equal
//# we'll do one sword and one shovel to make them equal again
//# both values reduce by 3 and for every such steps we get 2 emeralds
//# so we add (k//3)*2 to our answer.
//# now k becomes k%3 either 0,1 or 2
//# if it's 2, we can have one more emerald.
//# now print the answer

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
		
		lli a,b,m1,m2,n=0,x,y,m;
		
		cin>>a>>b;
		
		x=a;
		
		y=b; 
		
		if(x>=2*y)
		{
			
			n = y;
		}
		
		else
		
		if(y>=2*x)
		{
			n = x;
		}
		
		else
		
		{
			n = (a+b)/3;
		}
		
			
		cout<<n<<endl;
		
	}
	

    return 0;
}


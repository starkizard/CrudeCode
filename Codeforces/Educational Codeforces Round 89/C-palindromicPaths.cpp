//# refer https://www.geeksforgeeks.org/zigzag-or-diagonal-traversal-of-matrix/ for diagonal order of a matrix
//# Example: Rolling two dices would give us 36 pairs: (1,1),(1,2)...(6,6). Now visualize diagonal elements as pair having sum 2, pairs having sum 3 and so on.
//# Therefore the diagonal elements of matrix are pairs having same sum.
//# Given the word palindromic but what does it mean?
//# Palindromic means that elements from (1,1) and (n,m) are same 1 or 0.
//# When going from (1,1) we can go to either (1,2) or (2,1) so visualize this as diagonal with sum 3.
//# At the same time we can go from (n,m) to (n-1,m) and (n,m-1)
//# So question asks us to grab number of ways to make equidistant diagonal elements (from begin and end) equal.
//# We have taken k as the maximum limit of diagonal sum.
//# Run loop and see if i+j is p or is it the diagonal from the end (n+m-p)
//# Add the minimum of zeroes or one's
//# print the sum.

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
		
		lli n,m,i,j,k,p,s=0,r=0,c=0;
		
		cin>>n>>m;
		
		lli a[n][m];
		
		k = m + n-1;
		
		for(i=0;i<n;i++)
		{
			
			for(j=0;j<m;j++)
			{
				
				cin>>a[i][j];
				
			}
		}
		
		if(k%2==0)
		{
			
			k = k/2;
			
		}
		else
		{
			
			k = (k+1)/2;
			
			k--;
			
		}
		
		for(p=2;p<=k+1;p++)
		{
			s=0;
			
			c=0;
			
			for(i=0;i<n;i++)
			{
				
				for(j=0;j<m;j++)
				{
					
					if((i+j+2==p || i+j+2==n+m-p+2 ))
					{
						
						s += a[i][j];
						
						c++;
						
					}
					
				}
				
			}
			
			r += min(s,c-s);
			
		}
		
		cout<<r<<endl;
		
	}

    return 0;
}


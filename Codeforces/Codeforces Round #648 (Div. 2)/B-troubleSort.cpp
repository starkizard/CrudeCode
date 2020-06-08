//# keep in mind that swapping can be done on ANY two elements as long as their b is different.
//# Definitely do not assume that the swapping could be done only on consecutive elements. and drop like 600 points on the question..
//# definitely didn't happen to me
//# So, if they are all of the same b , they have to be sorted , otherwise you can do nothing
//# else, if there is even one difference, lets analyze
//# let's say you want to insert the nth element at the correct place (just like insertion sort)
//#  (1)- if the element at the correct place is of different b , easy peasy just swap.
//# if it's not. there is at least one element existing with a different b . swap it with that element and we arrive at case (1).
//# so, if all the bs aren't 0 or 1, its definitely possible to sort.

#include <bits/stdc++.h>

#define lli long long int
#define mod 1000000007
#define fi first
#define se second
#define ii pair<int, int>
#define mp make_pair
const double PI = 3.141592653589793238460;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	lli t;
	cin>>t;
	while(t--)
	{
		lli n,i,k,check=1,j,temp,swap,one=0,zero=0;
		cin>>n;
		vector<lli> a,b;
		for(i=0;i<n;i++)
		{
			cin>>k;
			a.push_back(k);
			if(i!=0)
			{
				if(k>=a[i-1] && check==1)
				{
					check=1;
				}
				else
				{
					check=0;
				}
					
			}
		}
		
		for(i=0;i<n;i++)
		{
			cin>>k;
			b.push_back(k);
			if(k==1)
				one++;
			else
				zero++;
		}
		
		if(check==1)
			cout<<"Yes"<<endl;
		else
		{
			if(one>=1 && zero>=1)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
		
		
	}

    return 0;
}

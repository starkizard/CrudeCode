//# We need to put one's in the cells where there aren't any other 1s in the same row or same coloumn
//# And when we put a 1, we can't put a 1 in that row or in that column
//# means we need to find the number of rows which are all 0
//# and the number of columns that are all 0 
//# the minimum of these two would be the number of moves
//# if it's even , Vivek wins, else Ashish.

#include <bits/stdc++.h>

#define lli long long int
#define mod 1000000007
#define fi first
#define se second
#define ii pair<int, int>
#define mp make_pair
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	lli t;
	cin>>t;
	while(t--)
	{
		lli m,n,i,j,k,l,f=0,col=0,row=0;
		cin>>n>>m;
		lli a[n][m];
		for(i=0;i<n;i++)
		{
			f=0;
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(f==0 && a[i][j]==0)
				{
					continue;
				}
				else
				{
					f=1;
				}
			}
			if(f==0)
			{
				col++;
			}
		}
		
		for(j=0;j<m;j++)
		{
			f=0;
			for(i=0;i<n;i++)
			{
				if(f==0 && a[i][j]==0)
				{
					continue;
				}
				else
				{
					f=1;
				}
			}
			if(f==0)
			{
				row++;
			}
		}
		
		k = min(row,col);
		
		if(k%2!=0)
		{
			cout<<"Ashish"<<endl;
		}
		else
		{
			cout<<"Vivek"<<endl;
		}
		
	}

    return 0;
}

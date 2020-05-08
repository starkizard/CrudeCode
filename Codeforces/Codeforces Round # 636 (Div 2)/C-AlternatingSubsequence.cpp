/*
    Author: Aryan Yadav
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rep(i, a, b) for (long long i = a; i <= b; i++)
#define fm(i, a, b, c) for (long long i = a; i > b; i--)
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define t     \
    ll t;     \
    cin >> t; \
    while (t--)
#define pb(i) push_back(i)
#define mp(i, j) make_pair(i, j)
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast;
    t
    {
        ll n, s, p, c;
        cin >> n;
        s = 0;
        cin >> p;
        n--;
        while (n--)
        {
            cin >> c;
            if (p * c > 0)
            {
                if (c > p)
                    p = c;
            }
            else
            {
                s += p;
                p = c;
            }
        }
        cout << s + p << "\n";
    }
    return 0;
}
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
        ll n;
        cin >> n;
        ll x;
        ll i = 2;
        ll mm = 0;
        while (true)
        {
            mm = pow(2, i);
            if ((n % (mm - 1)) == 0)
            {
                x = (n / (mm - 1));
                break;
            }
            ++i;
        }
        cout << x << "\n";
    }
    return 0;
}
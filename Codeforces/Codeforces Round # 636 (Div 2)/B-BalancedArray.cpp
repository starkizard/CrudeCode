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
        if ((n % 4) != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            f(i, 0, n / 2)
            {
                cout << i * 2 + 2 << " ";
            }
            f(i, 0, (n / 2) - 1)
            {
                cout << i * 2 + 1 << " ";
            }
            cout << 3 * (n / 2) - 1 << "\n";
        }
    }
    return 0;
}
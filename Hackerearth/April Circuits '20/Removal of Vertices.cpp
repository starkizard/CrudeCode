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
        ll n, k;
        cin >> n >> k;
        ll z = ((2 * k) % n) + 2;
        if (z > n)
            z -= n;
        ll p = (ll)log2(n);
        ll m = (ll)pow(2, p);
        ll ans;
        if (m == n)
        {
            ans = n;
        }
        else
        {
            ll dif = n - m;
            ans = 2 * dif;
        }
        ans += z;
        if (ans > n)
        {
            ans -= n;
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}

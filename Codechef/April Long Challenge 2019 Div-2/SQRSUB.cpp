/*
    Author: Aryan Yadav
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define f(i, a, b) for (long long i = a; i < b; i++)
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
        vi v;
        f(i, 0, n)
        {
            ll m;
            cin >> m;
            if (m % 2 != 0)
            {
                v.pb(0);
            }
            else if (m % 4 == 0)
            {
                v.pb(2);
            }
            else
            {
                v.pb(1);
            }
        }
        vi index(n);
        ll next = -1;
        for (ll i = n - 1; i >= 0; i--)
        {
            index[i] = next;
            if (v[i] != 0)
                next = i;
        }
        ll total = (n * (n + 1)) / 2;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (index[i] == -1)
                    break;
                else if (v[index[i]] == 1)
                {
                    if (index[index[i]] == -1)
                    {
                        ans += n - index[i];
                    }
                    else
                    {
                        ans += index[index[i]] - index[i];
                    }
                }
            }
            else if (v[i] == 1)
            {
                if (index[i] == -1)
                {
                    ans = ans + n - i;
                    break;
                }
                else
                {
                    ans += index[i] - i;
                }
            }
        }
        cout << total - ans << endl;
    }
    return 0;
}
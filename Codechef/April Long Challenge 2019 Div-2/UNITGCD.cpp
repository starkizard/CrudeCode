/*
    Author: Aryan Yadav
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define f(i, a, b) for (long long i = a; i < b; i++)
#define fm(i, a, b, c) for (long long i = a; i > b; i--)
#define rep(i, a, b) for (long long i = a; i <= b; i++)
#define repm(i, a, b, c) for (long long i = a; i >= b; i--)
#define vi vector<i>
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
        if (n != 1)
        {
            ll ans = floor(n / 2);
            cout << ans << "\n";
            if (ans == 0)
            {
                cout << "0\n";
            }
            else if (ans >= 2)
            {
                cout << "3"
                     << " "
                     << "1"
                     << " "
                     << "2"
                     << " "
                     << "3"
                     << "\n";
                ll j = 4;
                f(i, 1, ans)
                {
                    if (i != ans - 1)
                    {
                        cout << "2"
                             << " " << j++ << " " << j++ << '\n';
                    }

                    else
                    {
                        if (j != n - 1)
                        {
                            cout << "1"
                                 << " " << j << "\n";
                            break;
                        }
                        else
                        {
                            cout << "2"
                                 << " " << j++ << " " << j++ << "\n";
                        }
                    }
                }
            }
            else
            {
                cout << n << " ";
                rep(i, 1, n)
                {
                    cout << i << " ";
                }
                cout << "\n";
            }
        }
        else
        {
            cout << "1\n";
            cout << "1 "
                 << "1\n";
        }
    }
    return 0;
}
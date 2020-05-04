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
        ll n, k;
        cin >> n >> k;
        ll c1 = pow(2, k);
        if (n < c1)
        {
            cout << "0" << endl;
        }
        else
        {
            ll count = 0;
            while (n % 2 == 0)
            {
                count++;
                n = n / 2;
            }
            for (int i = 3; i <= sqrt(n); i = i + 2)
            {
                while (n % i == 0)
                {
                    count++;
                    n = n / i;
                }
            }

            if (n > 2)
                count++;

            if (k <= count)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
    }
    return 0;
}
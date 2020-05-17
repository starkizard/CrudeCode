/*
    Author: Aryan Yadav
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rep(i, a, b) for (long long i = a; i <= b; i++)
#define fm(i, a, b) for (long long i = a; i > b; i--)
#define repm(i, a, b) for (long long i = a; i >= b; i--)
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define pqmaxi priority_queue<int>
#define pqmaxl priority_queue<ll>
#define pqmini priority_queue<int, vi, greater<int>>
#define pqminl priority_queue<ll, vl, greater<ll>>
#define t     \
    ll t;     \
    cin >> t; \
    while (t--)
#define pb(i) push_back(i)
#define mp(i, j) make_pair(i, j)
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
double pi = 3.1415926535897;
bool ff(pair<ll, ll> &n1, pair<ll, ll> &n2)
{
    if (n1.first == n2.first)
        return n1.second < n2.second;
    return n1.first > n2.first;
}
int main()
{
    fast;
    ll n;
    cin >> n;
    vl v(n);
    f(i, 0, n)
    {
        cin >> v[i];
    }
    ll c25 = 0;
    ll c50 = 0;
    bool poss = true;
    f(i, 0, n)
    {
        if (v[i] == 100)
        {

            if (c25 >= 1 && c50 >= 1)
            {
                c25 -= 1;
                c50 -= 1;
            }
            else if (c25 >= 3)
            {
                c25 -= 3;
            }
            else
            {
                poss = false;
                break;
            }
        }
        else if (v[i] == 50)
        {
            c50 += 1;
            if (c25 >= 1)
            {
                c25 -= 1;
            }
            else
            {
                poss = false;
                break;
            }
        }
        else
        {
            c25++;
        }
    }
    if (poss == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
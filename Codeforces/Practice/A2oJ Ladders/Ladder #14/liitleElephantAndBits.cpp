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
    string s;
    cin >> s;
    int ind = -1e9;
    f(i, 0, s.length())
    {
        if (s[i] == '0')
        {
            ind = i;
            break;
        }
    }
    if (ind == -1e9)
    {
        f(i, 1, s.length())
        {
            cout << s[i];
        }
    }
    else
    {
        f(i, 0, s.length())
        {
            if (i != ind)
                cout << s[i];
        }
    }
    return 0;
}
/*
    Author: Aryan 
    https://codeforces.com/contest/343/problem/B

    Logic: If the same sign repeats twice we can untangle that part as either they will be above the other wire or below.
        Thus we keep on untangling as we get some repeated characters.
        At last if stack is empty means we have untangled it completely.
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

int main()
{
    fast;
    string s;
    cin >> s;
    stack<char> v;
    f(i, 0, s.length())
    {
        if (v.empty())
        {
            v.push(s[i]);
        }
        else
        {
            if (v.top() == s[i])
                v.pop();
            else
                v.push(s[i]);
        }
    }
    if (v.empty())
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
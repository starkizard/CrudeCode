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

vl dectobin(ll n)
{
    vl binaryNum(16);
    fill(binaryNum.begin(), binaryNum.end(), 0);

    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    reverse(binaryNum.begin(), binaryNum.end());
    return binaryNum;
}

void bintodec(vl &v)
{
    ll dec = 0;
    ll base = 1;
    for (ll i = v.size() - 1; i >= 0; i--)
    {
        dec += v[i] * base;
        base *= 2;
    }
    cout << dec << "\n";
    return;
}

int main()
{
    fast;
    ll i = 1;
    t
    {
        ll n, r;
        char c;
        cin >> n >> r;
        cin >> c;
        vl v = dectobin(n);
        if (c == 'L')
        {
            rotate(v.begin(), v.begin() + r, v.end());
            bintodec(v);
        }
        else
        {
            rotate(v.begin(), v.begin() + v.size() - r, v.end());
            bintodec(v);
        }
    }
    return 0;
}

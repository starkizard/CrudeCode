/*
    Author: Aryan Yadav
    https://codeforces.com/contest/797/problem/C

    Logic: The intution after seeing the question was to use a stack as we can see that in a string t we can only add from front and can remove from the back i.e a hint to use stack.
        We use a hash map to store the occurrence of charcters. As we iterate through the string we push the character in the stack and check if any character with lesser ASCII value is still present in the string and we do this by using the hashmap.
        If there is character with lesser value we push the current character else we keep on popping the character from the stack and add to the answer string until we have a character whose value is greater than all of the values present in the original string or the stack becomes empty. 
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

bool can(char c, int *a)
{
    f(i, 0, int(c))
    {
        if (a[i] > 0)
            return false;
    }
    return true;
}
int main()
{
    fast;
    string s;
    cin >> s;
    stack<char> t1;
    string u;
    int a[256] = {0};
    f(i, 0, s.length())
    {
        a[s[i]]++;
    }
    f(i, 0, s.length())
    {
        while (!t1.empty() && can(t1.top(), a))
        {
            u.pb(t1.top());
            t1.pop();
        }
        t1.push(s[i]);
        a[s[i]]--;
    }
    while (t1.empty() == false)
    {
        u.pb(t1.top());
        t1.pop();
    }
    cout << u;

    return 0;
}

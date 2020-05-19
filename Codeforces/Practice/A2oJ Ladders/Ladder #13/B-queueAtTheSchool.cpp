// auth: starkizard
// swapping all BG found for GB in t
// if swapped pointer increases by two, so no consecutive swaps in one t 
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
#define all(x) x.begin(), x.end()
#define test     \
    ll test;     \
    cin >> test; \
    while (test--)
#define pb(i) push_back(i)
#define mp(i, j) make_pair(i, j)
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast;
    int n,t; cin >> n >> t;
    string s; cin >> s;
    while(t--){
        int i=0;
        while(i<n-1){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i+1]='B';
                s[i]='G';
                i+=2;
            }
            else i+=1;
        }
    }
    cout << s <<"\n";

    return 0;
}

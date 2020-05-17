#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rep(i, a, b) for (long long i = a; i <= b; i++)
#define fm(i, a, b) for (long long i = a; i > b; i--)
#define repm(i, a, b) for (long long i = a; i >= b; i--)
#define vi vector<int>
// auth: starkizard
// having a loop which updates the maximum joy
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
    ll n,k; cin >> n >> k;
    ll m;
    f(i,0,n){

        ll t,f; cin >> f >> t;
        if(i==0){
            if(k<t) m=f-(t-k);
            else m=f;
        }
        else{
            if(k<t){
                m=max(m,f-(t-k));
            }
            else{
                m=max(m,f);
            }
        }
    }
    cout << m << "\n";
    return 0;
}

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
bool ok(ll key, vl v, ll target,ll n){
    ll cmp=0;
    f(i,0,n){
        cmp+=key/v[i];
    }
    return cmp>=target;
}
int main(){
    ll n,t; cin >> n >> t;
    vl v(n);
    long double m=0;
    f(i,0,n){
        cin >> v[i];
        m+=(1.0/(long double)v[i]);
    }
    ll z= (t+n)/m +1;
    ll x=t/m -1;
    for(ll b=z-x+1; b>=1; b/=2){
        while(!ok(x+b,v,t,n)) x+=b;
    }
    cout << x+1 << "\n";
}

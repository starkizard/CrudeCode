#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx,fma")
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
    cin.tie(NULL);
vector<long long> v;
bool ok(ll x,ll k){
    ll count=0;
    ll tempsum=0;
    ll n=v.size();
    f(i,0,n){
        if(tempsum+v[i]<=x){
            tempsum+=v[i];
        }
        else{
            count++;
            tempsum=v[i];
        }
    }
    count++;
    if(count<=k){
        return true;
    }
    else{
        return false;
    }
}
 
int main()
{
    ll n,k; cin >> n >> k;
    ll sm=0,mx=0;
    f(i,0,n){
        ll element; cin >> element;
        v.pb(element);
        mx=max(mx,v[i]);
        sm+=v[i];
    }
    ll l=mx-1;
    for(ll r=(sm-mx)/2 +1;r>=1;r/=2){
        while(!ok(l+r,k)) l+=r;
    }
    cout << l+1;
    return 0;  
}

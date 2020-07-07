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
int main(){
    fast;
    ll n,x; cin >> n >> x;
    vector<pair<ll,ll>> a(n);
    f(i,0,n){
        ll key;
        cin >> key;
        a[i]={key,i+1};
 
    }
    sort(all(a));
    ll l=0,r=n-1;
    while(l<r){
        ll sum=a[l].first+a[r].first;
        if(sum>x){
            r--;
        }
        else if(sum<x){
            l++;
        }
        else{
            cout << a[l].second << " " << a[r].second << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
 

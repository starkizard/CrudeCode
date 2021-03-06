#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx,fma")
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef tree<long long,null_type,less_equal<long long>,rb_tree_tag,tree_order_statistics_node_update> indexed_multiset;
 
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
 
int main()
{
    ll n,k; cin >> n >> k;
    multiset<ll,greater<ll>> s;
    vector<pair<ll,ll>> times;
    f(i,0,k){
        s.insert(0);
    }
    f(i,0,n){
        ll start,end; cin >> start >> end;
        times.push_back({end,start});
    }
    sort(all(times));
    ll ans=0;
    f(i,0,n){
        auto itr=s.lower_bound(times[i].second);
        if(itr!=s.end()){
            s.erase(itr);
            s.insert(times[i].first);
            ans++;
        }
    }
    cout << ans << "\n";
}

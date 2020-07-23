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
    vl v(n);
    indexed_multiset s;
    f(i,0,n){
        cin >> v[i];
        if(i<k) s.insert(v[i]);
    }
    vl medians;
    medians.pb( *(s.find_by_order(k&1?k/2:k/2-1)));
    f(i,k,n){
        s.insert(v[i]);
        s.erase(s.find_by_order(s.order_of_key(v[i-k])));
        medians.pb(*(s.find_by_order(k&1?k/2:k/2-1)));
    }
    ll first=0;
    f(i,0,k){
        first+=abs(medians[0]-v[i]);
    }
    cout << first << " ";
    f(i,1,n+1-k){
        if(k&1){
            ll next=first+ abs(medians[i]-medians[i-1]);
            next-=abs(medians[i]-v[i-1]);
            next+=abs(medians[i]-v[i+k-1]);
            first=next;
        }
        else{
            if(medians[i]-medians[i-1]<0){
                first+=2*(medians[i-1]-medians[i]);
            }
            first+=abs(medians[i]-v[i+k-1])-abs(medians[i]-v[i-1]);
            
        }
        cout << first << " ";
    }
}

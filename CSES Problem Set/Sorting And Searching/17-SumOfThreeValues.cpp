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
    ll n,x; cin >> n >> x;
    vector<pair<ll,ll>> v(n);
    f(i,0,n){
        ll val; cin >> val;
        v[i]=mp(val,i);
    }
    sort(all(v));
    fm(c,n-1,-1){
        ll r=c-1;
        ll l=0;
        ll target=x-v[c].first;
        while(l<r){
            ll val=(v[l].first+v[r].first);
            if(val==target){
                cout << v[l].second+1 << " " << v[r].second+1 << " " << v[c].second+1 << "\n";
                return 0; 
            }
            else if(val<target){
                l++;
            }
            else{
                r--;
            }
        }
 
    }
    cout << "IMPOSSIBLE\n";
}

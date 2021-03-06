#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef tree<long long,null_type,less_equal<long long>,rb_tree_tag,tree_order_statistics_node_update> indexed_multiset;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<string> vs;
typedef priority_queue<int> pqmaxi;
typedef priority_queue<ll> pqmaxl;
typedef priority_queue<int, vi, greater<int>> pqmini;
typedef priority_queue<ll, vl, greater<ll>> pqminl;

template <typename T,typename U> using umap=unordered_map<T,U>;
template <typename T>            using uset=unordered_set<T>;

#define F first;
#define S second;
#define fo(i, a, b) for (long long i = a; i < b; ++i)
#define fm(i, a, b) for (long long i = a; i > b; --i)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define test     \
    ll test;     \
    cin >> test; \
    while (test--)
#define pb(i) push_back(i)
#define eb(i) emplace_back(i)
#define mp(i, j) make_pair(i, j)
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
const ll mod=1000000007;

// --------- IMP FUNCTIONS----------------------------------------------------------------------------------------------------------------

// Binary Exponentiation under mod p
ll power(ll x,ull y,ll p){ 
    ll r=1;  x%=p;
    if(!x) return 0;  
    while(y){    
        if(y&1) r=(r*x)%p;    
        y>>=1;   
        x=(x*x)%p;  
    }  
    return r;  
}

// String multiplication
string operator*(string lhs, const int rhs){
    string res="";
    for(int i=0;i<rhs;++i) res+=lhs;
    return res;
}

//-----CODE-----------------------------------------------------------------------------------------------------------------------
int main(){
    auto time_req= clock();
    fast;
    // code goes here
    test{
        ll n ,m ; cin >> n >> m;
        vl a(n),b(m); fo(i,0,n) cin >> a[i]; fo(i,0,m) cin >> b[i];

        uset<ll> us(n),found;
        stack<ll> s;

        s.push(0);
        while(sz(s)){
            ll p = s.top();
            s.pop();
            if(found.count(p)) continue;
            found.insert(p);
            fo(i,0,max(n,m)){
                if(i<n && !us.count(p|a[i])){
                    s.push(p|a[i]);
                    us.insert(p|a[i]);
                }
                if(i<m && !us.count(p&b[i])){
                    s.push(p&b[i]);
                    us.insert(p&b[i]);  
                }
            }
        }
        cout << sz(us) << "\n";

    }

    cerr << "\nSolved, time = " << (float)(clock()-time_req)/CLOCKS_PER_SEC << "s\n";
    return 0;
}
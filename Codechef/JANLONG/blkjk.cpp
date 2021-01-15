// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")

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

vl subset;
ll answer=10000;
vl a;
vector< vector<bool> > visited;

void solve(ll sum, ll index, ll n, ll x, ll y){
    // base case
    if(index==n || sum>=y || answer==1 || visited[sum][index]){
        visited[sum][index]=false;
        return;
    }
    visited[sum][index]=true;
    // choice 1 : to include this index
    if(sum+a[index] <=y){
        subset.pb(index);
        if(sum+a[index]>=x && sum+a[index]<=y){
            ll lower= lower_bound(all(subset),sz(subset)) - subset.begin();
            if(lower<sz(subset)) answer=min(sz(subset)-lower,answer);
            subset.pop_back();
            visited[sum][index]=false;
            return;
        }
        solve(sum+a[index],index+1,n,x,y);
        subset.pop_back();
    }
    // choice 2: to not include this index
    solve(sum,index+1,n,x,y);


}

int main(){
    auto time_req= clock();
    fast;
    // code goes here
    test{
        ll n,x,y,cursum=0,minelem=10000 ; cin >> n >> x >> y;
        a.clear();
        a.resize(n); 
        bool forZero=false, forOne=false;

        fo(i,0,n){
            cin >> a[i];
            minelem=min(minelem,a[i]);
            cursum+=a[i];
            if(cursum<=y && cursum>=x) forZero=true;
            if(a[i]<=y && a[i]>=x) forOne=true;
        }
        if(forZero) answer=0;
        else if(forOne) answer=1;
        else if(cursum<x || minelem>y) answer=-1;
        else{
                subset.clear();
                visited.clear();
                visited.resize(y+1);
                for(auto& row: visited) row.resize(n+1);
                subset.resize(0);
                answer=10000;
                solve(0,0,n,x,y);
                answer = answer>n?-1:answer;
        }
        cout << answer << "\n";
    }

    cerr << "\nSolved, time = " << (float)(clock()-time_req)/CLOCKS_PER_SEC << "s\n";
    return 0;
}
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
    ll n; cin >> n;
    vl k(n);
    f(i,0,n){
        cin >> k[i];
    }
    ll l=0,r=0;
    ll answer=0;
    unordered_map<ll,ll> umap(n);
    while(r<n){
        if(umap.count(k[r])==0){
            umap[k[r]]=r;
            answer=max(answer,r-l+1);
            r++;
        }
        else{
            while(l<umap[k[r]]+1){
                umap.erase(k[l]);
                l+=1;
            }
            umap[k[r]]=r;
            answer=max(answer,r-l+1);
            r++;
        }
    }
    cout << answer << "\n";

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
    vl v(n),s(n+1);
    ll sm=0;
    f(i,0,n){
        s[i]=sm;
        cin >> v[i];
        sm+=v[i];
    }
    s[n]=sm;
    unordered_map<ll,ll> umap(n+1);
    f(i,0,n+1){
        if(umap.count(s[i])==0){
            umap[s[i]]=1;
        }
        else umap[s[i]]++;
    }
    ll answer=0;
    f(i,0,n+1){
        umap[s[i]]-=1;
        if(umap[s[i]]==0){
            umap.erase(s[i]);
        }
        if(umap.count(x+s[i])!=0){
            answer+=umap[x+s[i]];
        }
    }
    cout << answer << "\n";
 
}

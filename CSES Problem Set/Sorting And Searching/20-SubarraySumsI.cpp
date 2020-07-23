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
    ll answer=0;
    vl v(n);
    f(i,0,n) cin >> v[i];
    ll l=0;
    ll r=1;
    ll cursum=v[l];
    while(l<n and r<n){
        while(cursum+v[r]<=x){
            cursum+=v[r];
            r++;
        }
        if(cursum==x){
            answer++;
        }
        cursum-=v[l];
        l++;        
    }
    cout << answer << "\n";
}

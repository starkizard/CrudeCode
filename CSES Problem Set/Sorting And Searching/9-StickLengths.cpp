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
    vl p(n);
    f(i,0,n){
        cin >> p[i];
    }
    sort(all(p));
    if(n&1){
        ll median=n/2;
        ll answer=0;
        f(i,0,n){
            answer+=abs(p[median]-p[i]);
        }
        cout << answer << "\n";
    }
    else{
        ll median1=n/2;
        ll median2=n/2-1;
        ll answer1=0,answer2=0;
        f(i,0,n){
            answer1+=abs(p[median1]-p[i]);
            answer2+=abs(p[median2]-p[i]);
        }
        cout << min(answer1,answer2) << "\n";
    }
}

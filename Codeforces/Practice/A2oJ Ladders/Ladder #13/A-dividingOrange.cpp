// auth: starkizard
// making a vector having all those numbers from 1 to nk not given in the input
// for every element in the input, n-1 numbers from the made vector are printed.

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

int main()
{
    fast;
    int n,k; cin >> n >> k;
    vi v(k);
    unordered_set<int> s;
    f(i,0,k) cin >> v[i];
    for(auto i: v) s.insert(i);
    vi v2;
    f(i,1,n*k +1){
        if(s.count(i)==0) v2.pb(i); 
    }
    int j=0,count;
    f(i,0,k){
        cout << v[i] << " ";
        count=0;
        while(count<n-1){
            cout << v2[j] << " ";
            count++;
            j++;
        }
        cout << "\n";
    }


    return 0;
}

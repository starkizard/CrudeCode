// auth: starkizard
// creating two unordered maps to count the frequencies of strings s+t and z
// if they're equal answer is YES
// otherwise NO
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
    unordered_map<char,int> umap;
    unordered_map<char,int> umap2;
    string s,t,z;
    cin >> s;
    cin >> t;
    cin >> z;
    s+=t;
    for(auto i:s){
        if(umap.find(i)==umap.end()){
            umap[i]=1;
        }
        else{
            umap[i]+=1;
        }
    }
    for(auto i : z){
        if(umap2.find(i)==umap2.end()){
            umap2[i]=1;
        }
        else{
            umap2[i]+=1;
        }
    }
    if(umap2==umap) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
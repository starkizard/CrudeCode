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
    ll n; cin >> n;
    ll totalrooms=1;
    priority_queue< tuple<ll,ll,ll> ,vector< tuple<ll,ll,ll> > ,greater< tuple<ll,ll,ll> > >  pq;
    vector<tuple<ll,ll,ll>> times(n);
    vl answer(n);
    f(i,0,n){
        ll end,start; cin >> start >> end;
        times[i]=make_tuple(start,end,i);
    }
    sort(all(times));
    pq.push(make_tuple( get<1>(times[0]),get<0>(times[0]),1 ));
    answer[get<2>(times[0])]=1;
    f(i,1,n){
        ll start= get<0>(times[i]);
        ll end= get<1>(times[i]);
        if(start > get<0>(pq.top())){
            ll room=get<2>(pq.top());
            pq.pop();
            pq.push(make_tuple(end,start,room));
            answer[get<2>(times[i])]=room;
        }
        else{
            totalrooms++;
            ll room =totalrooms;
            pq.push(make_tuple(end,start,room));
            answer[get<2>(times[i])]=room;
        }
    }
    cout << totalrooms << "\n";
    f(i,0,n){
        cout << answer[i] << " ";
    }
    cout << "\n";
}

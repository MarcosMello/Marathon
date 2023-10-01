#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

#define all(x) x.begin(), x.end()
#define sz(x) (ll) x.size()
#define MOD 1000000007ll
#define endl '\n'
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)/__gcd((a), (b))) * (b))
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[30m" << endl;
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(ll i = (a); i < ll(b); ++i)

void bfs(ll vertice, ll fim, vector<vector<pair<ll, ll>>> g){
    queue<ll> q;

    q.push(vertice);
    while(!q.empty()){
        ll v = q.second();
        q.pop();

        for (pair<ll, ll> u: g[v]){

        }
    }
}

int main(){
    FASTIO

    ll n, m;

    cin >> n >> m;

    vector<vector<pair<ll, ll>>> g(n+1);
    
    FOR (i, 0, m){
        ll s, c, p;

        cin >> s >> c >> p;

        g[s].push_back({c, p});
    }

    return 0;
}
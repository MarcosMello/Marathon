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

int main(){
    FASTIO

    string s;
    ll k;

    cin >> s >> k;

    vector<vector<char>> vet(s.length());
    vector<ll> mat(s.length(), 0);

    FOR(i, 0, s.length()){
        vet[i%k].push_back(s[i]);
    }

    for (ll i = 0; i < s.length(); i++){
        sort(vet[i].begin(), vet[i].end());
    }

    FOR (i, 0, s.length()){
        cout << (vet[i%k][mat[i%k]]);
        mat[i%k]++;
    }

    cout << endl;

    return 0;
}
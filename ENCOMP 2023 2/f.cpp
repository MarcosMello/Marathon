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
    ll n, max, sub, a, ant, atu, r = 0;
    vector<ll> valores;
    cin >> n >> max;
    FOR(i, 0, n){
        cin >> a;
        valores.push_back(a);
    }
    ant = valores[0];
    atu = valores[1];
    FOR(i, 1, n){
        if(valores[i-1] == max){
            ant = valores[i];
            
            continue;
        }
        sub = max - ant;
        valores[i] += sub;
        
        r += abs(sub);
        ant = valores[i+1];
    }

    cout << r << endl;

    return 0;
}
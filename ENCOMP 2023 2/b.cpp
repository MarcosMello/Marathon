#include <bits/stdc++.h>

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

vector<bool> crivoFunction (ll n){
    vector<bool> primo(n+1, true);
    primo[0] = primo[1] = false;

    for(ll i = 2; i <= n; i++){
        if (primo[i] && i * i <= n){
            for(ll j = i*i; j <= n; j+=i){
                primo[j] = false;
            }
        }
    }

    return primo;
}

ll soma(ll n){
    ll s = 0;

    while (n >= 10){
        s += n % 10;
        n /= 10;
    }

    return s + n;
}

vector<ll> primoSomaMemoFunction (ll n, const vector<bool>& crivo){
    vector<ll> primoSomaMemo(n+1, 0);

    for (ll i = 1; i <= n; i++){
        if (i <= 10){
            primoSomaMemo[i] = crivo[i] ? primoSomaMemo[i-1] + crivo[i] : primoSomaMemo[i-1];
        } else{
            primoSomaMemo[i] = crivo[i] ? primoSomaMemo[i-1] + crivo[soma(i)] : primoSomaMemo[i-1];
        }
    }

    return primoSomaMemo;
}

int main(){
    FASTIO

    vector<bool> crivo = crivoFunction(10000000);
    vector<ll> primoSomaMemo = primoSomaMemoFunction(10000000, crivo);

    ll q, e1, e2;

    cin >> q;

    FOR (i, 0, q){
        cin >> e1 >> e2;

        cout << (primoSomaMemo[e2] - primoSomaMemo[e1 - 1]) << endl;
    }

    return 0;
}
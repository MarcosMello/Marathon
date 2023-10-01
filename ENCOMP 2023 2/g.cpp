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

    ll n, q, m, cont = 0, resposta = 0;
    bool prev = false;
    cin >> n >> q;

    bool vet[n] = {false};

    FOR (i, 0, q){
        cin >> m;
        vet[m-1] = true;
    }

    FOR (i, 0, n){
        if(vet[i]){
            if(prev){
                cont = ceil(cont/2.0);
            }
            resposta = max(cont, resposta);
            prev = true;
            cont = 0;
            continue;
        }
        cont++;
        
    }
    resposta = max(cont, resposta);
    cout << resposta << endl;
    return 0;
}
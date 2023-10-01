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
    ll a, b, r, an, pedaco, areaPizza, dimensao;
    
    cin >> a >> b >> r >> an;
    dimensao = a * b;

    areaPizza = (r*r) * 3;

    if(2*r > a || 2*r > b){
        cout << "N" << endl;
        
        return 0;
    }
    pedaco = 360/an;

    if(areaPizza % pedaco == 0){
        cout << "S" << endl;
        return 0;
    }
        cout << "N" << endl;





    return 0;
}
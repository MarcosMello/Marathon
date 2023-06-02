#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define lsb(i) ((i) & -(i))

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0);

class FenwickTree {
    private:
        vll ft;
    public:
        FenwickTree(ll m) { ft.resize(m+1, 0); }
        FenwickTree(const vll &a) { build(a); }

        ll sum(ll i){
            ll s = 0;

            while (i >= 1){
                s += ft[i];
                i -= lsb(i);
            }

            return s;
        }

        ll sum(ll a, ll b){
            return (sum(b) - sum(a-1));
        }

        void add(ll i, ll x){
            while (i < (ll) ft.size()){
                ft[i] += x;
                i += lsb(i);
            }
        }

        void build(const vll &a){
            ll m = (ll) a.size() - 1;
            ft.resize(m+1, 0);

            for (ll i = 0; i <= m; i++){
                ft[i] += a[i];
                if (i+ lsb(i) <= m){
                    ft[i+lsb(i)] += ft[i];
                }
            }
        }

        ll select(ll k){
            ll ini = 1, fim = (ll) ft.size() - 1;
            for (int i = 0; i < 30; ++i){
                ll m = ini + (fim - ini) / 2;
                if (sum(1, m) < k){
                    ini = m;
                } else {
                    fim = m;
                }
            }

            return fim;
        }
};

int main(){
    FASTIO;

    ll n, o;

    cin >> n >> o;

    ll zero = 0;

    vll lista(n+1);

    for (ll i = 0; i < n+1; i++){
        lista[i] = 0; 
    }

    FenwickTree ft(lista);

    char x;
    ll c1, c2;

    for (ll i = 0; i < o; i++){
        cin >> x;

        if (x == 'F'){
            cin >> c1;

            if (ft.sum(c1, c1)){
                ft.add(c1, -1);
            } else {
                ft.add(c1, 1);
            }
        } else if (x == 'C'){
            cin >> c1 >> c2;

            cout << ft.sum(c1, c2) << "\n";
        }   
    }

    return 0;
}
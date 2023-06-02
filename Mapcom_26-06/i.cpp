#include <bits/stdc++.h>

typedef long long ll;
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){
    FASTIO;

    ll x;

    cin >> x;

    ll y, z;

    vector<pair<ll, ll>> entrada;

    for (ll i = 0; i < x; i++){
        cin >> y >> z;

        entrada.push_back(make_pair(y, 1));
        entrada.push_back(make_pair(z, 0));
    }

    sort(entrada.begin(), entrada.end());

    ll maior = 0;

    ll vivo = 0;

    for (auto p: entrada){
        if (p.second){
            vivo++;
        } else {
            if (vivo > maior){
                maior = vivo;
            }
            vivo--;
        }
    }

    cout << maior << "\n";

    return 0;
}
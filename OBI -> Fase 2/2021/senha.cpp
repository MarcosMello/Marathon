#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m, k, p;
    ll comb, l, qnt, j = 0;

    string senha, tmp;

    cin >> n >> m >> k;

    vector<string> palavras;
    vector<char> letras;

    cin >> senha;

    for (ll i = 0; i < m; i++){
        cin >> tmp;
        palavras.push_back(tmp);
    }

    for (auto&& p: palavras){
        sort(p.begin(), p.end());
    }

    cin >> p;

    p -= 1;

    comb = pow(k, m);

    for (ll i = 1; i <= m; i++){
        l = p/(comb/pow(k, i));

        if (l >= k){
            qnt = l/k;
            l -= k * qnt;
        }

        letras.push_back((palavras[(i-1)][l]));
    }

    for (ll i = 0; i < size(senha); i++){
        if (senha[i] == '#'){
            cout << letras[j];
            j++;
        }
        else{
            cout << senha[i];
        }
    }

    cout << "\n";

    return 0;
}
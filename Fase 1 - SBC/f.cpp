#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, c, tmp, maior = 0;
    string s, r, tmps;

    vector<unordered_set<char>> lista;
    vector<string> plv;
    vector<ll> pos;

    vector<string> rsp;
    set<string> rsp2;

    cin >> n >> c;

    for (ll i = 0; i < c; i++){
        unordered_set<char> x;
        lista.push_back(x);
    }

    for (ll i = 0; i < n; i++){
        cin >> s;

        plv.push_back(s);

        for (ll j = 0; j < c; j++){
            if (s[j] != '*'){
                lista[j].insert(s[j]);
            } else {
                pos.push_back(j);
            }
        }
    }

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < lista[pos[i]].size(); j++){
            plv[i][pos[i]] = *(next((lista[pos[i]]).begin(), j));
            rsp.push_back(plv[i]);
            rsp2.insert(plv[i]);
        }
    }

    for (ll i = 0; i < rsp2.size(); i++){
        tmps = *(next(rsp2.begin(), i));
        tmp = count(rsp.begin(), rsp.end(), tmps);
        if (tmp > maior){
            maior = tmp;
            r = tmps;
        }
    }

    cout << r << " " << maior << "\n";

    return 0;
}
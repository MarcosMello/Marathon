#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAXN = 20000;

int main(){
    unordered_map<string, int> cont;

    ll n;
    string senha[MAXN];

    cin >> n;

    ll v = - n;

    for (ll i = 0; i < n; i++){
        cin >> senha[i];
        unordered_set<string> substrings;

        for (ll j = 0; j < senha[i].length(); j++){
            string cadeia;
            for (ll k = j; k < senha[i].length(); k++){
                cadeia.push_back(senha[i][k]);
                substrings.insert(cadeia);
            }
        }

        for (auto x: substrings){
            cont[x]++;
        }
    }

    for(auto x: senha){
        v += cont[x];
    }

    cout << v << "\n";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll perm(vector<ll> e1){
    set<string> elements;

    return elements.size();
}

int main(){
    ll n, x, soma = 0;

    cin >> n;

    set<ll> e1;
    set<ll> e2;

    for (ll i = 0; i < n; i++){
        cin >> x;
        if (x >= 1)
            e1.insert(x);
    }

    for (ll i = 0; i < n; i++){
        cin >> x;
        if (x >= 1)
            e2.insert(x);
    }

    if (e1.size() < 4){
        soma += 0;
    } else {
        vector<ll> e1;

        for (auto i: e1){
            e1.push_back(i);
        }

        soma += perm(e1);
    }

    if (e2.size() < 4){
        soma += 0;
    } else {
        vector<ll> e2;

        for (auto i: e2){
            e2.push_back(i);
        }

        soma += perm(e2);
    }

    cout << soma << "\n";

    return 0;
}
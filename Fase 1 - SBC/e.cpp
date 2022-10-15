#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, aL = 0;

    cin >> n;

    ll b[n];

    for (ll i = 0; i < n; i++){
        cin >> b[i];
    }

    vector<pair<ll, ll>> lista;

    lista.push_back(make_pair(b[0], b[0]-1));

    for (ll i = 1; i < n; i++){
        vector<pair<ll, ll>>::iterator it = find(lista.begin(), lista.end(), make_pair(b[i]+1, b[i]));
        if (it != lista.end()){
            if (b[i] != 1){
                (*it).first = b[i];
                (*it).second = b[i] - 1;
            } else {
                lista.erase(it);
                aL += 1;
            }
        } else{
            lista.push_back(make_pair(b[i], b[i]-1));
        }
    }

    cout << lista.size() + aL << "\n";

    return 0;
}
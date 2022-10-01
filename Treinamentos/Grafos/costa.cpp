#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define INFLL 0x3f3f3f3f3f3f3f3f

char grafo[1000][1000];

ll d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool isValid(ll x, ll y, ll n, ll m){
    return x >= 0 && y >= 0 && x < n && y < m;
}

bool isBeach(ll x, ll y, ll n, ll m){
    ll newPos[4][2] = {{x + d[0][0], y + d[0][1]},
                       {x + d[1][0], y + d[1][1]},
                       {x + d[2][0], y + d[2][1]},
                       {x + d[3][0], y + d[3][1]}};

    ll terra = 0;

    if (isValid(newPos[0][0], newPos[0][1], n, m)){
        if (grafo[newPos[0][0]][newPos[0][1]] == '#'){
            terra++;
        }
    }
    if (isValid(newPos[1][0], newPos[1][1], n, m)){
        if (grafo[newPos[1][0]][newPos[1][1]] == '#'){
            terra++;
        }
    }
    if (isValid(newPos[2][0], newPos[2][1], n, m)){
        if (grafo[newPos[2][0]][newPos[2][1]] == '#'){
            terra++;
        }
    }
    if (isValid(newPos[3][0], newPos[3][1], n, m)){
        if (grafo[newPos[3][0]][newPos[3][1]] == '#'){
            terra++;
        }
    }

    return 4 > terra;
}

int main(){
    ll n, m, resp = 0;
    cin >> n >> m;

    vector<pair<ll, ll>> terras;

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> grafo[i][j];
            if (grafo[i][j] == '#'){
                terras.push_back(make_pair(i, j));
            }
        }
    }

    for (auto i: terras){
        resp += isBeach(i.first, i.second, n, m);
    }

    cout << resp << "\n";

    return 0;
}
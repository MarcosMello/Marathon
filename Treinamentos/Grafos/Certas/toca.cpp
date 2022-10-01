#include <bits/stdc++.h>

using namespace std;

#define INFLL 0x3f3f3f3f3f3f3f3f

typedef long long ll;

ll grafo[1000][1000];

ll d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool visited[1000][1000];

bool valid(ll posX, ll posY, ll n, ll m){
    return posX >= 0 && posY >= 0 && posX < n && posY < m && grafo[posX][posY] != 0 && !visited[posX][posY];
}

ll DFS(ll posX, ll posY, ll n, ll m){
    if(grafo[posX][posY] == 3){
        return 1;
    }

    visited[posX][posY] = true;

    ll ans = INFLL;

    for (ll i = 0; i < 4; i++){
        ll nextX = posX + d[i][0];
        ll nextY = posY + d[i][1];

        if (valid(nextX, nextY, n, m)){
            ans = min(ans, DFS(nextX, nextY, n, m));
        }
    }

    return ans + 1;
}

int main(){
    ll n, m, posIni[2] = {0, 0};

    cin >> n >> m;

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> grafo[i][j];
            if (grafo[i][j] == 2){
                posIni[0] = i;
                posIni[1] = j;
            }
        }
    }

    cout << DFS(posIni[0], posIni[1], n, m) << "\n";

    return 0;
}
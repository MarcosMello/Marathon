#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll matriz[n][n] = {0};

    ll x = 1;
    ll z = 1;

    for (ll j = 0; j < n; j++){
        for (ll i = j; i < (n - j); i++){
            matriz[j][i] = x;
            matriz[i][j] = x;
            matriz[i][n-z] = x;
            matriz[n-z][i] = x;
        }

        x++;
        z++;
    }

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
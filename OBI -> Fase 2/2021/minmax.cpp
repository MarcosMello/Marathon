#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll soma(ll num){
    ll aux, soma = 0;

    while (num > 0){
        aux = num;
        num /= 10;
        soma += (aux - (num * 10));
    }

    return soma;
}

int main(){
    ll i, j, n, somaV;

    cin >> n >> i >> j;

    vector<ll> lista;

    for(i; i <= j; i++){
        somaV = soma(i);
        if(n == somaV){
            lista.push_back(i);
        }
    }

    ll tam = size(lista);

    if (tam > 0){
        sort(lista.begin(), lista.end());
        cout << lista[0] << "\n" << lista[tam-1] << "\n";
    }

    return 0;
}
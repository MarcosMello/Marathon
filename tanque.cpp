#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll c; //consumo
    ll d; //distancia
    ll t; //qtd antes de abastecer

    cin >> c >> d >> t;

    float r = t - (d/(c*1.0));

    if (r > 0){
        cout << 0 << "\n";
    }
    else{
        cout << r << "\n"; //falta arredondar, codigo em python
    }

    return 0;
}
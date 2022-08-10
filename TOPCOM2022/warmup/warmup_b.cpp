#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll in, fim, soma, p1;
    long double var;

    cin >> in >> fim;

    for (int i = in + 1; i < fim; i++){
        var = sqrt(i);
        if (!(var > (ll) var)){
            p1 = (i/100);
            soma = p1 + (i - (p1 * 100));
            if (soma == (ll) var){
                cout << i << "\n";
            }
        }
    }
}
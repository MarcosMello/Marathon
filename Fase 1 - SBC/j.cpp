#include <bits/stdc++.h>

#define endl "\n"

typedef long long ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, tmp, soma = 0;
    ll jo = 0, ma = 0;
    cin >> n;

    ll cart[11] = {0, };
    ll cartE[4] = {0, 0, 0, 0};

    for (ll i = 0; i < 2; i++){
        cin >> tmp;
        cart[tmp >= 11 ? 10 : tmp]++;
        jo += tmp >= 11 ? 10 : tmp;

        if (tmp >= 10){
            cartE[tmp - 10]++;
        }
    }
    for (ll i = 0; i < 2; i++){
        cin >> tmp;
        cart[tmp >= 11 ? 10 : tmp]++;
        ma += tmp >= 11 ? 10 : tmp;

        if (tmp >= 10){
            cartE[tmp - 10]++;
        }
    }

    for (ll i = 0; i < n; i++){
        cin >> tmp;
        cart[tmp >= 11 ? 10 : tmp]++;
        soma += tmp >= 11 ? 10 : tmp;

        if (tmp >= 10){
            cartE[tmp - 10]++;
        }
    }

    ll mG = 23 - (ma + soma), jG = 23 - (jo + soma), jEv = 100;

    vector<ll> jE;

    for (ll i = jG + 1; i <= 10; i++){
        if ((i < 10 && cart[i] < 4) || (i == 10 && cart[10] < 16)){
            jE.push_back(i);
        }
    }

    if (!jE.empty()){
        jEv = *(min_element(jE.begin(), jE.end()));
    }

    if ((mG < 10 && cart[mG] < 4) || (mG == 10 && cart[10] < 16) || !jE.empty()){
        if (mG < jEv){
            if (mG == 10){
                for (ll i = 0; i < 4; i++){
                    if (cartE[i] < 4){
                        cout << i+10 << "\n";
                        break;
                    }
                }
            } else if (cart[mG] < 4){
                cout << mG << "\n";
            } else {
                cout << -1 << '\n';
            }
        } else if (!jE.empty()){
            if (jEv == 10){
                for (ll i = 0; i < 4; i++){
                    if (cartE[i] < 4){
                        cout << i+10 << "\n";
                        break;
                    }
                }
            } else {
                cout << jEv << "\n";
            }
        } else{
            cout << -1 << "\n";
        }
    } else{
        cout << -1 << "\n";
    }

    return 0;
}
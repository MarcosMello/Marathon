#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool pali(string a, ll i, ll j){
    ll tA = a.size();

    if (tA == 1){
        return true;
    }
    else{
        for (ll i = 0; i < j/2; i++){
            if (a[i] != a[j-i]){
                return false;
            }
        }

        return true;
    }
}

int main(){
    ll n;
    string palavra;

    ll maior = 0;

    cin >> n;
    cin >> palavra;

    if (pali(palavra, 0, palavra.size() - 1)){
        cout << palavra.size() << "\n";
        return 0;
    }   

    for (ll i = 0; i < n; i++){
        for (ll j = i; j < n; j++){
            if (pali(palavra, i , j)){
                if (maior < (j - i)){
                    maior = (j - i);
                }
            }
        }
    }
    
    cout << maior << "\n";

    return 0;
}
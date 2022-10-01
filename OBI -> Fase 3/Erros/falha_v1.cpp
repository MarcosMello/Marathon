#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, senha = 0, ti, tj;

    cin >> n;

    string s[20000];
    string tmp;

    for (ll i = 0; i < n; i++){
        cin >> tmp;
        s[i] = tmp;
    }

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            ti = s[i].length();
            tj = s[j].length();

            if (ti > tj){
                for (ll k = 0; k + tj - 1 < ti; k++){
                    if(s[i].substr(k, tj) == s[j]){
                        senha++;
                        break;
                    }
                }
            }
            else if(s[i] == s[j] && i != j){
                senha++;
            }
        }
    }

    cout << senha << "\n";

    return 0;
}
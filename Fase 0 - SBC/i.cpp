#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll k, l, r, i, maior, tmp;

    cin >> k >> l >> r;

    i = l;

    string str = "";

    while (str.length() < (r-l) + 1){
        str += to_string(i);
        i++;
    }

    str = str.substr(0, (r-l)+1);

    maior = stoll(str.substr(0, k));

    for (ll i = 1; i < str.length() - (k - 1); i++){
        tmp = stoll(str.substr(i, k));
        maior = tmp > maior ? tmp : maior;
    }

    cout << maior << "\n";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m;
    ll o, i1, i2;

    cin >> n >> m;

    vector<ll> c[n+1];
    vector<ll>::iterator it;

    for (ll i = 0; i < m; i++){
        cin >> o >> i1 >> i2;
        if (o == 1){
            c[i1].push_back(i2);
            c[i2].push_back(i1);
        } else{
            it = find(c[i1].begin(), c[i1].end(), i2);
            if (it != c[i1].end()){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
    }

    return 0;
}
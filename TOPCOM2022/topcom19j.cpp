#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpll;

ll ab(ll num, ll x, ll b, ll pot){
    if (num == 0){
        return b;
    }

    if (x % 2 == 0){
        b++;
    }

    ll a = (x + (x >> 20) + 12345) % pot;

    return ab(num-1, a, b, pot);

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll num;

    cin >> num;

    cout << ab(num, 1611516670, 0, pow(2, 32)) << endl;
}
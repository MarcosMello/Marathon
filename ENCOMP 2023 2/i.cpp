#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

#define all(x) x.begin(), x.end()
#define sz(x) (ll) x.size()
#define MOD 1000000007ll
#define endl '\n'
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)/__gcd((a), (b))) * (b))
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[30m" << endl;
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(ll i = (a); i < ll(b); ++i)

int main(){
    FASTIO
    ll m, n;

    ll con = 0;

    cin >> m >> n;

    string mat[m];

    for (ll i = 0; i < m; i++){
        cin >> mat[i];
    }

    for (ll i = 0; i < m; i++){
        for (ll j = 0; j < n; j++){
            if (mat[i][j] == '+'){
                if (i-1 >= 0 && mat[i-1][j] == '-'){
                    con++; 
                } else if (i+1 < m && mat[i+1][j] == '-'){
                    con++;
                } else if (j+1 < n && mat[i][j+1] == '-'){
                    con ++;
                } else if (j-1 >= 0 && mat[i][j-1] == '-'){
                    con ++;
                }
            }
        }
    }

    cout << con << endl;

    return 0;
}
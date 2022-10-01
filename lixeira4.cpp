#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

long long binpow(long long x, long long n, long long m = 1) {
    x %= m;
    long long res = 1;
    while (n > 0) {
        if (n & 1)
            res = res * x % m;
        x = x * x % m;
        n >>= 1;
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, a, b, m;

    m = 1000000007;
    cin >> n;

    for(ll i=0; i<n; i++){
        cin >> a >> b;
        cout << binpow(a, b, m) << "\n";
    }

    return 0;
}
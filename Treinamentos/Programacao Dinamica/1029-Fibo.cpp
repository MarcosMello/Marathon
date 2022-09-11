#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fib (ll n, ll *counter){ //código O(ouro^n)
    *counter += 1;
    if (n == 1) return 1;
    else if (n == 0) return 0;
    else return (fib((n - 1), counter) + fib((n - 2), counter));
}

int main(){
    ll n, n2, x;
    ll *counter = &x;
    ll fibres;

    cin >> n;

    for (ll i = 0; i < n; i++){
        x = 0;

        cin >> n2;

        fibres = fib(n2, counter);

        cout << "fib(" << n2 << ") = " << *counter - 1 << " calls = " << fibres << "\n";
    }

    return 0;
}
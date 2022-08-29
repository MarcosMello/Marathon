#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll a, b, c, d;

    cin >> a >> b >> c >> d;

    vector<ll> menor;

    menor.push_back(abs((a + b) - (c + d)));

    menor.push_back(abs((a + c) - (b + d)));

    menor.push_back(abs((c + b) - (a + d)));

    sort(menor.begin(), menor.end());

    cout << menor[0] << "\n";

    return 0;
}
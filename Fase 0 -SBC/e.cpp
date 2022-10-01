#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    ll n,l,d;

    cin >> n >> l >> d;

    cout << (ceil((n * d)/((l * 1000) * 1.0)) * l) << "\n";
}
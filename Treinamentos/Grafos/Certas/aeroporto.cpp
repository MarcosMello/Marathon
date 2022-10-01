#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void findall(ll ls[], ll n, ll sz){
    vector<ll> vec;
    for (ll i = 0; i < sz; i++){
        if (ls[i] == n){
            vec.push_back(i);
        }
    }
    for (ll i = 0; i < vec.size(); i++){
        if(i != vec.size() - 1){
            cout << (vec[i] + 1) << " ";
        } else{
            cout << (vec[i] + 1) << "\n";
        }
    }
}

int main(){
    ll a, v;
    ll p, x;
    ll t = 0;

    do{
        cin >> a >> v;
        ll ls[a] = {0};
        for (ll i = 0; (a != 0 && v != 0) && i < v; i++){
            cin >> p >> x;
            ls[p-1]++;
            ls[x-1]++;
        }
        if(a != 0 && v != 0){
            t++;
            cout << "Teste " << t << "\n";
            findall(ls, *(max_element(ls, ls + a)), a);
        }
    }while(a != 0 && v != 0);

    return 0;
}
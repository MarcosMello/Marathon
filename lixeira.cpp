#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool pali(string a){
    ll tA = a.size();

    if (tA == 1){
        return true;
    }
    else{
        for (ll i = 0; i < tA; i++){
            if (a[i] != a[tA-1-i]){
                cout << a[i] << " " << a[tA-1-i] << "\n";
                return false;
            }
        }

        return true;
    }
}

int main(){
    cout << pali("mirim") << "\n";

    return 0;
}
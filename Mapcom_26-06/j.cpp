#include <bits/stdc++.h>

typedef long long ll;
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    FASTIO;

    int n;
    int n2;
    int k;
    cin >> n;

    int v[100000] = {0};
    int x[n];

    for (int i = 0; i < n; i++){
        cin >> k;
        
        x[i] = k;
        v[k-1] = 1;
    }

    cin >> n2;

    for (int i = 0; i < n2; i++){
        cin >> k;

        v[k-1] = 0;
    }

    for (int i = 0; i < n; i++){
        if(v[x[i] - 1]){
            cout << x[i] << " ";
        }
    }

    cout << "\n";

    return 0;
}
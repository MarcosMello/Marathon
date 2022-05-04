#include <bits/stdc++.h>

using namespace std;

int main(){
    int iM, iF1, iF2, iF3, maior = 0;
    cin >> iM >> iF1 >> iF2;

    iF3 = iM - iF1 - iF2;

    maior = iF1;

    if (iF2 > maior){
        maior = iF2;
    }
    if (iF3 > maior){
        maior = iF3;
    }

    cout << maior << "\n";
    return 0;
}
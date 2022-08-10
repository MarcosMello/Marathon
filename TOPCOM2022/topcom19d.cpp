#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string rna1;
    string rna2;

    long long  maior = 0, maiorTotal = 0;
    cin >> rna1 >> rna2;

    for (int i = 0; i < rna1.length(); i++){
        if(rna1[i] != rna2[i]){
            maior += 1;
        }else{
            if(maior > maiorTotal){
                maiorTotal = maior;
            }
            maior = 0;
        }
    }

    cout << maiorTotal << "\n";
}
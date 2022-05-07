#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string dna;
    cin >> dna;

    long long qnt = 0, maior = -1;
    char carac = ' ';

    for(auto c : dna){
        if (carac == ' '){
            carac = c;
            qnt++;
        }
        else if (c != carac){
            if(maior < qnt){
                maior = qnt;
            }
            qnt = 1;
            carac = c;
        }
        else{
            qnt++;
        }
    }

    if (maior < qnt){
        maior = qnt;
    }

    cout << maior << endl;

    return 0;
}
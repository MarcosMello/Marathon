#include <bits/stdc++.h>

using namespace std;

class rena {
public:
    string nome;
    int peso, idade;
    float altura;

    rena(){
        this -> nome = "";
        this -> peso = 0;
        this -> idade = 0;
        this -> altura = 0.0;
    }

    rena(string nome, int peso, int idade, float altura){
        this -> nome = nome;
        this -> peso = peso;
        this -> idade = idade;
        this -> altura = altura;
    }

    bool operator<(const rena r){
        if (peso < r.peso){
            return false;
        }
        else if (peso == r.peso){
            if(idade < r.idade){
                return true;
            }
            else if (idade == r.idade){
                if (altura < r.altura){
                    return true;
                }
                else if(altura == r.altura){
                    return nome < r.nome;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
};

int main(){
    int qt;

    cin >> qt;

    for (int i = 0; i < qt; i++){
        int r, rA;
        vector<rena> renas;

        cin >> r >> rA;

        for (int j = 0; j < r; j++){
            string nome;
            int peso, idade;
            float altura;

            cin >> nome >> peso >> idade >> altura;

            rena ren(nome, peso, idade, altura);

            renas.push_back(ren);
        }

        sort(renas.begin(), renas.end());

        cout << "CENARIO" << " {" << i+1 << "}" << endl;

        for (int k = 0; k < rA; k++){
            cout << k+1 << " - " << renas[k].nome << endl;
        }
    }

    return 0;
}
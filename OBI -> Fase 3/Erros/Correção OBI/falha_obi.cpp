// OBI2021 - Fase 3
// Falha de segurança

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 20000;

int n;
string senhas[MAXN];

unordered_map<string, int> contador;

int main(void) {
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> senhas[i];
    unordered_set<string> subcadeias;

    for (int j = 0; j < (int) senhas[i].size(); j++) {
      string corrente;
      for (int k = j; k < (int) senhas[i].size(); k++) {
        corrente.push_back(senhas[i][k]);
        subcadeias.insert(corrente);
      }
    }

    for (auto &x : subcadeias)
      contador[x]++;
  }

  int resp = 0;
  for (auto &x : senhas)
    resp += contador[x];

  cout << resp - n << endl;

  return 0;
}


#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	ll qnt, p1 = 0, somaA = 0, somaB = 0, somaT;

	cin >> qnt;

	ll l[qnt][qnt];

	for (ll i = 0; i < qnt; i++){
		for (ll j = 0; j < qnt; j++){
			cin >> l[i][j];
		}
	}

	for (ll i = 0; i < qnt; i++){
		somaA = 0;
		somaB = 0;
		for (ll j = 0; j < qnt; j++){
			somaA += l[i][j];
			somaB += l[j][i];
		}

		if (i == 0){
			somaT = somaA;
		}
		else if (somaA != somaT || somaB != somaT){
			cout << -1 << "\n";
			return 0;
		}
	}

	somaA = 0;
	somaB = 0;

	for (ll i = 0; i < qnt; i++){
		somaA += l[i][i];
		somaB += l[i][((qnt - 1) - i)];
	}

	if (somaA != somaT || somaB != somaT){
		cout << -1 << "\n";
		return 0;
	}
	else{
		cout << somaT << "\n";
	}

	return 0;
}
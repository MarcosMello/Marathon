#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpll;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(ll i = (a); i < (ll)(b); ++i)
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define all(x) x.begin(),x.end()
#define sz(x) (ll)x.size()
#define MOD 1000000007ll
#define endl '\n'

struct comp{
	ll nome;
	ll points;
};

bool org(comp a, comp b){
	if (a.points == b.points){
		return a.nome < b.nome;
	}
	return a.points > b.points;
}

int main(){
	ll g, p, s, k, ki, kip;

	do{
		cin >> g >> p;

		if (g != 0 && p != 0){

			ll dados[g][p];

			FOR(i, 0, g){
				FOR(j, 0, p){
					cin >> dados[i][j];
				}
			}

			cin >> s;

			FOR(i, 0, s){
				comp compt[p];

				FOR(j, 0, p){
					compt[j].nome = j+1;
					compt[j].points = 0;
				}

				cin >> k;

				kip = 0;

				FOR(j, 0, k){
					cin >> ki;

					kip++;

					FOR(l, 0, g){
						FOR(m, 0, p){
							if (dados[l][m] == kip){
								compt[m].points += ki;
							}
						}
					}
				}

				sort(compt, compt + p, org);

				FOR(j, 0, p){
					if (j == 0){
						cout << compt[j].nome;
					}
					else if (compt[j].points == compt[0].points){
						cout << " " << compt[j].nome;
					}
					else{
						break;
					}
				}

				cout << "\n";
			}
		}
	}while(g != 0 && p != 0);

	return 0;
}
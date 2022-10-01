// OBI2022 - Fase 2
// Tarefa Viagem
// André Sousa

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10010;
const int MAXV = 210;
const long long int INF = 1e18;
vector<int> grafo[MAXN];
vector<int> tempo[MAXN];
vector<int> preco[MAXN];
long long int dist[MAXN][MAXV];
set<pair<long long int, pair<int, int> > > fora;
int main() {
  int v, n, m;

  scanf("%d %d %d", &v, &n, &m);

  for(int i = 1; i <= m; i++) {
    int a, b, t, p;
    scanf("%d %d %d %d", &a, &b, &t, &p);
    grafo[a].push_back(b);
    tempo[a].push_back(t);
    preco[a].push_back(p);

    grafo[b].push_back(a);
    tempo[b].push_back(t);
    preco[b].push_back(p);
  }

  int x, y;

  scanf("%d %d", &x, &y);

  dist[x][v] = 0;

  fora.insert(make_pair(0, make_pair(x, v)));

  for(int i = 1; i <= n; i++) {
    for(int k = 0; k <= v; k++) {
      if(!((i == x) && (k == v))) {
        dist[i][k] = INF;
        fora.insert(make_pair(INF, make_pair(i, k)));
      }
    }
  }

  while(!fora.empty()) {
    pair<long long int, pair<int, int> > aux = *(fora.begin());
    int vcur = aux.second.first;
    int valcur = aux.second.second;
    fora.erase(fora.begin());

    for(int i = 0; i < grafo[vcur].size(); i++) {
      int viz = grafo[vcur][i];
      int t = tempo[vcur][i];
      int p = preco[vcur][i];

      int val = valcur - p;
      if(val < 0) continue;

      if(dist[viz][val] > dist[vcur][valcur] + t) {
        fora.erase(make_pair(dist[viz][val], make_pair(viz, val)));
        dist[viz][val] = dist[vcur][valcur] + t;
        fora.insert(make_pair(dist[viz][val], make_pair(viz, val)));
      }
    }
  }

  long long int resp = INF;
  for(int k = 0; k <= v; k++)
    resp = min(resp, dist[y][k]);

  if(resp == INF) printf("-1\n");
  else printf("%lld\n", resp);
}

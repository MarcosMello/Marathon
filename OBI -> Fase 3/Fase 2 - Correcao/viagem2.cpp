// OBI2022 - Fase 2
// Tarefa Viagem
// Yan Silva

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxv = 210;
const int maxn = 10010;
const int inf = 1000000010;

int n, m, v;
int x, y;

ll dp[maxn][maxv];

vector<tuple<int,int,int>> adj[maxn];

int main()
{
    cin >> v >> n >> m;

    for(int i = 1 ; i <= m ; i++)
    {
        int u, v, t, c;
        cin >> u >> v >> t >> c;

        adj[u].push_back( { v , t , c } );
        adj[v].push_back( { u , t , c } );
    }

    cin >> x >> y;

    for(int custo = 0 ; custo <= v ; custo++)
    {
        for(int i = 1 ; i <= n ; i++)
            dp[i][custo] = inf;

        dp[y][custo] = 0;

        for(int i = 1 ; i <= n ; i++)
        {
            for(auto [viz, w, c]: adj[i])
            {
                if( c == 0 || custo < c )
                    continue;

                dp[i][custo] = min( dp[i][custo] , dp[viz][custo - c] + w );
            }
        }

        set<pair<ll,int>> s;

        for(int i = 1 ; i <= n ; i++)
            s.insert( { dp[i][custo] , i } );

        while( !s.empty() )
        {
            int cur = s.begin()->second;
            s.erase( s.begin() );

            for(auto [viz, w, c]: adj[cur])
            {
                if( c != 0 )
                    continue;

                if( dp[viz][custo] > dp[cur][custo] + w )
                {
                    s.erase( { dp[viz][custo] , viz } );
                    dp[viz][custo] = dp[cur][custo] + w;
                    s.insert( { dp[viz][custo] , viz } );
                }
            }
        }
    }

    if( dp[x][v] == inf )
        cout << dp[x][v] << endl;
    else
        cout << "-1" << endl;
}
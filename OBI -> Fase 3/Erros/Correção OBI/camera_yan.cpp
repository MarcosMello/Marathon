// OBI2022 - Fase 2
// Tarefa Cameras
// Yan Silva

#include <iostream>

using namespace std;

int dx[] = { 0 , 0 , 1 , -1 };
int dy[] = { 1 , -1 , 0 , 0 };

const int MAXN = 110;

int n, m, k;

bool vigiada[MAXN][MAXN];
bool visitada[MAXN][MAXN];

void DFS(int x, int y)
{
    visitada[x][y] = true;

    for(int d = 0 ; d < 4 ; d++)
    {
        int vx = x + dx[d], vy = y + dy[d];

        if( n < vx || vx <= 0 )
            continue;

        if( m < vy || vy <= 0 )
            continue;

        if( visitada[vx][vy] || vigiada[vx][vy] )
            continue;

        DFS(vx, vy);
    }
}

int main()
{
    cin >> m >> n >> k;

    for(int i = 1 ; i <= k ; i++)
    {
        int x, y;
        char direcao;
        cin >> y >> x >> direcao;

        if( direcao == 'N' )
        {
            for(int j = 1 ; j <= x ; j++)
                vigiada[j][y] = true;
        }

        if( direcao == 'S' )
        {
            for(int j = x ; j <= n ; j++)
                vigiada[j][y] = true;
        }

        if( direcao == 'O' )
        {
            for(int j = 1 ; j <= y ; j++)
                vigiada[x][j] = true;
        }

        if( direcao == 'L' )
        {
            for(int j = y ; j <= m ; j++)
                vigiada[x][j] = true;
        }
    }

    if (vigiada[1][1] == true) {
        cout << "N" << endl;      
	return 0;
    }
      
    DFS(1, 1);

    if( visitada[n][m]  )
        cout << "S" << endl;
    else
        cout << "N" << endl;
}

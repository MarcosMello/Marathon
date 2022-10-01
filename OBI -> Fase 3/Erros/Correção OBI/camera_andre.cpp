#include <bits/stdc++.h>
const int MAXN = 110;
int mat[MAXN][MAXN];
int n, m, k;
//          N, S, L, O        
int dl[] = {-1, 1, 0,  0}; 
int dc[] = { 0, 0, 1, -1};

int idx(char d) {
  if(d == 'N') return 0;
  if(d == 'S') return 1;
  if(d == 'L') return 2;
  if(d == 'O') return 3;
  return 0;
}

bool valid(int l, int c) {
  return (1 <= l) && (l <= n) && (1 <= c) && (c <= m);
}

void dfs(int l, int c) {
  mat[l][c] = 2;
  for(int i = 0; i < 4; i++) {
    int nl = l + dl[i];
    int nc = c + dc[i];
    if(valid(nl, nc) && mat[nl][nc] == 0)
      dfs(nl, nc);
  }
}
  
int main() {
  scanf("%d %d %d", &m, &n, &k);
  
  for(int i = 1; i <= k; i++) {
    int c, l; 
    char d;
    scanf("%d %d %c", &c, &l, &d);
    int id = idx(d);
    while(valid(l, c)) {
      mat[l][c] = 1;
      l += dl[id];
      c += dc[id];
    }
  }
  
  if(mat[1][1] == 0) dfs(1, 1);
  
  if(mat[n][m] == 2) printf("S\n");
  else printf("N\n");
}
